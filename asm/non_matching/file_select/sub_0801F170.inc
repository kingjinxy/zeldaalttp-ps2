	THUMB_FUNC_START sub_0801F170
sub_0801F170: @ 0x0801F170
	push {r4,r5,lr}
	add r4, r0, #0
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #5
	strb r0, [r1]
	ldr r0, _0801F1E0  @ =gUnknown_0813B100
	str r0, [r4, #72]
	mov r0, #240
	strb r0, [r4, #23]
	bl 0x0800099C
	mov r1, #28
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	lsr r0, r0, #2
	add r5, r4, #0
	add r5, r5, #42
	strb r0, [r5]
	ldrh r1, [r4, #50]
	add r0, r4, #0
	add r0, r0, #112
	strh r1, [r0]
	ldrh r0, [r4, #54]
	add r1, r4, #0
	add r1, r1, #114
	strh r0, [r1]
	bl 0x0800099C
	mov r1, #112
	and r0, r0, r1
	add r0, r0, #240
	add r1, r4, #0
	add r1, r1, #118
	strh r0, [r1]
	add r0, r4, #0
	add r0, r0, #116
	ldrh r0, [r0]
	cmp r0, #0
	beq _0801F1E4
	mov r0, #1
	strb r0, [r4, #20]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	mov r1, #12
	bl 0x08003870
	b _0801F1FC
	.byte 0x00
	.byte 0x00
_0801F1E0:
	.4byte gUnknown_0813B100
_0801F1E4:
	mov r0, #2
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #6
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r1, [r5]
	add r0, r4, #0
	bl 0x08003870
_0801F1FC:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801F170

	.byte 0x00
	.byte 0x00
