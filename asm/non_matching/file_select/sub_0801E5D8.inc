	THUMB_FUNC_START sub_0801E5D8
sub_0801E5D8: @ 0x0801E5D8
	push {r4,lr}
	add r4, r0, #0
	mov r1, #12
	bl sub_0800997C
	mov r1, #128
	and r1, r1, r0
	cmp r1, #0
	beq _0801E610
	mov r0, #2
	strb r0, [r4, #20]
	mov r0, #30
	strb r0, [r4, #23]
	bl sub_08009E0C
	add r1, r0, #0
	str r1, [r4, #88]
	add r0, r4, #0
	bl sub_0803CECC
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #8
	bl sub_08003870
	b _0801E684
_0801E610:
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801E674
	bl sub_0800099C
	ldr r2, _0801E640  @ =gUnknown_0813ADB4
	mov r1, #3
	and r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	strb r0, [r4, #23]
	bl sub_0800099C
	mov r1, #31
	and r1, r1, r0
	cmp r1, #0
	beq _0801E644
	bl sub_0800099C
	b _0801E652
	.byte 0x00
	.byte 0x00
_0801E640:
	.4byte gUnknown_0813ADB4
_0801E644:
	bl sub_08044594
	add r1, r0, #0
	add r0, r4, #0
	bl sub_0803CECC
	add r0, r0, #4
_0801E652:
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	ldrb r0, [r1]
	lsr r0, r0, #3
	add r2, r4, #0
	add r2, r2, #42
	ldrb r1, [r2]
	cmp r0, r1
	beq _0801E674
	strb r0, [r2]
	ldrb r1, [r2]
	add r0, r4, #0
	bl sub_08003870
_0801E674:
	add r0, r4, #0
	bl sub_0800963C
	lsl r0, r0, #16
	cmp r0, #0
	bne _0801E684
	mov r0, #1
	strb r0, [r4, #23]
_0801E684:
	add r0, r4, #0
	bl GetNextFrame
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801E5D8

