	THUMB_FUNC_START sub_0805E9D4
sub_0805E9D4: @ 0x0805E9D4
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldr r1, _0805EA64  @ =gUnknown_08137B10
	ldr r2, [r7]
	ldrb r3, [r2, #10]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldr r2, [r1]
	str r2, [r0, #96]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #255
	beq _0805EA40
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	add r0, r1, #0
	bl sub_08013D20
	ldr r1, [r7]
	str r0, [r1, #124]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
_0805EA40:
	ldr r0, [r7]
	ldr r1, _0805EA68  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r7]
	ldr r1, [r1]
	ldr r2, [r2, #96]
	and r1, r1, r2
	cmp r1, #0
	beq _0805EA70
	ldr r1, _0805EA6C  @ =0x00008001
	b _0805EA74
	.byte 0x00
	.byte 0x00
_0805EA64:
	.4byte gUnknown_08137B10
_0805EA68:
	.4byte gUnknown_0201F000
_0805EA6C:
	.4byte 0x00008001
_0805EA70:
	mov r1, #128
	lsl r1, r1, #8
_0805EA74:
	mov r2, #15
	and r1, r1, r2
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
	ldr r0, [r7]
	ldr r1, _0805EB5C  @ =gUnknown_081414E4
	str r1, [r0, #72]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #63
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #57
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #92
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _0805EB60  @ =0x000021AA
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #60
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #153
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	mov r1, #0
	bl sub_08003870
	ldr r1, [r7]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, _0805EB64  @ =gUnknown_03000450
	ldrh r2, [r1, #24]
	sub r1, r0, r2
	asr r0, r1, #4
	ldr r2, [r7]
	mov r3, #54
	ldrsh r1, [r2, r3]
	ldr r2, _0805EB64  @ =gUnknown_03000450
	ldrh r3, [r2, #26]
	sub r1, r1, r3
	asr r2, r1, #4
	add r1, r2, #0
	lsl r2, r1, #6
	add r1, r2, #0
	orr r0, r0, r1
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F48
	ldr r1, [r7]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, _0805EB64  @ =gUnknown_03000450
	ldrh r2, [r1, #24]
	sub r1, r0, r2
	asr r0, r1, #4
	ldr r2, [r7]
	mov r3, #54
	ldrsh r1, [r2, r3]
	ldr r2, _0805EB64  @ =gUnknown_03000450
	ldrh r3, [r2, #26]
	sub r1, r1, r3
	asr r2, r1, #4
	add r1, r2, #0
	lsl r2, r1, #6
	add r1, r2, #0
	orr r0, r0, r1
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #15
	bl sub_08008F3C
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0805EB5C:
	.4byte gUnknown_081414E4
_0805EB60:
	.4byte 0x000021AA
_0805EB64:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_0805E9D4

