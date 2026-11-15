	THUMB_FUNC_START sub_0802986C
sub_0802986C: @ 0x0802986C
	push {r4-r6,lr}
	add r6, r0, #0
	add r0, r0, #65
	ldrb r0, [r0]
	cmp r0, #149
	bne _08029920
	ldr r0, [r6, #76]
	add r0, r0, #43
	ldrb r0, [r0]
	add r0, r0, #4
	mov r1, #24
	and r0, r0, r1
	cmp r0, #0
	bne _08029920
	add r2, r6, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	ldr r0, _08029928  @ =gUnknown_0201F000
	add r1, r6, #0
	add r1, r1, #82
	ldrb r2, [r1]
	lsl r2, r2, #2
	add r2, r2, r0
	ldr r1, _0802992C  @ =gUnknown_08137B10
	ldrb r0, [r6, #10]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r2]
	ldr r0, [r0]
	orr r1, r1, r0
	str r1, [r2]
	mov r0, #50
	ldrsh r4, [r6, r0]
	ldr r1, _08029930  @ =gUnknown_03000450
	ldrh r0, [r1, #24]
	add r0, r0, #8
	sub r4, r4, r0
	asr r4, r4, #4
	mov r2, #54
	ldrsh r0, [r6, r2]
	ldrh r1, [r1, #26]
	add r1, r1, #8
	sub r0, r0, r1
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r4, r4, r0
	lsl r4, r4, #16
	lsr r4, r4, #16
	mov r0, #169
	lsl r0, r0, #1
	add r5, r6, #0
	add r5, r5, #80
	ldrh r2, [r5]
	add r1, r4, #0
	bl sub_08014658
	ldr r0, _08029934  @ =0x00000153
	add r1, r4, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	bl sub_08014658
	mov r0, #170
	lsl r0, r0, #1
	add r1, r4, #0
	add r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	bl sub_08014658
	ldr r0, _08029938  @ =0x00000155
	add r4, r4, #65
	lsl r4, r4, #16
	lsr r4, r4, #16
	ldrh r2, [r5]
	add r1, r4, #0
	bl sub_08014658
	add r0, r6, #0
	mov r1, #23
	bl 0x08003E10
	add r0, r6, #0
	bl DeleteThisEntity
_08029920:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08029928:
	.4byte gUnknown_0201F000
_0802992C:
	.4byte gUnknown_08137B10
_08029930:
	.4byte gUnknown_03000450
_08029934:
	.4byte 0x00000153
_08029938:
	.4byte 0x00000155
	THUMB_FUNC_END sub_0802986C

