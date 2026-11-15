	THUMB_FUNC_START sub_08019D74
sub_08019D74: @ 0x08019D74
	push {r4,lr}
	add r4, r0, #0
	add r1, r4, #0
	add r1, r1, #112
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	beq _08019DBA
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08019DAC
	mov r0, #4
	strb r0, [r4, #23]
	ldr r1, [r4, #100]
	add r0, r4, #0
	bl sub_0803CECC
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x080040C4
_08019DAC:
	add r0, r4, #0
	bl sub_0801A11C
	add r0, r4, #0
	bl 0x08009694
	b _08019DC2
_08019DBA:
	mov r0, #7
	strb r0, [r4, #20]
	mov r0, #60
	strb r0, [r4, #23]
_08019DC2:
	add r0, r4, #0
	bl 0x08003828
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08019D74

	.byte 0x00
	.byte 0x00
