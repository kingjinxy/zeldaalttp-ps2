	THUMB_FUNC_START sub_080BBDB0
sub_080BBDB0: @ 0x080BBDB0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	ldr r2, _080BBE60  @ =gRam
	ldr r0, _080BBE64  @ =0x000016C4
	add r3, r2, r0
	ldrh r1, [r3]
	str r1, [sp]
	mov r5, #182
	lsl r5, r5, #5
	add r4, r2, r5
	ldrh r0, [r4]
	str r0, [sp, #4]
	ldr r1, _080BBE68  @ =0x00000EE2
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r5, _080BBE6C  @ =0x00000EE3
	add r0, r2, r5
	ldrb r0, [r0]
	add r1, r1, r0
	add r5, r5, #31
	add r0, r2, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r5, r5, #1
	add r0, r2, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r1, r1, #15
	lsr r1, r1, #16
	str r1, [sp, #8]
	ldr r1, _080BBE70  @ =0x00000ED2
	add r0, r2, r1
	ldrb r1, [r0]
	sub r5, r5, #48
	add r0, r2, r5
	ldrb r0, [r0]
	add r1, r1, r0
	add r5, r5, #31
	add r0, r2, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r5, r5, #1
	add r0, r2, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #16
	lsl r1, r1, #15
	lsr r1, r1, #16
	str r1, [sp, #12]
	mov r7, #15
	mov r8, r2
	mov r10, r3
	mov r9, r4
_080BBE2A:
	ldr r0, _080BBE74  @ =0x00000FF2
	add r0, r0, r8
	add r1, r7, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080BBEC8
	ldr r3, _080BBE78  @ =0x000010E2
	add r0, r2, r3
	add r2, r7, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _080BBE46
	sub r0, r0, #1
	strb r0, [r2]
_080BBE46:
	ldrb r0, [r1]
	cmp r0, #196
	bne _080BBE7C
	mov r4, sp
	ldrh r5, [r4, #8]
	mov r4, r10
	strh r5, [r4]
	mov r0, sp
	ldrh r1, [r0, #12]
	mov r0, r9
	strh r1, [r0]
	b _080BBE8A
	.byte 0x00
	.byte 0x00
_080BBE60:
	.4byte gRam
_080BBE64:
	.4byte 0x000016C4
_080BBE68:
	.4byte 0x00000EE2
_080BBE6C:
	.4byte 0x00000EE3
_080BBE70:
	.4byte 0x00000ED2
_080BBE74:
	.4byte 0x00000FF2
_080BBE78:
	.4byte 0x000010E2
_080BBE7C:
	mov r0, #250
	lsl r0, r0, #1
	mov r3, r10
	strh r0, [r3]
	ldr r0, _080BBF1C  @ =0x0000079C
	mov r4, r9
	strh r0, [r4]
_080BBE8A:
	lsl r5, r7, #24
	lsr r5, r5, #24
	ldr r0, _080BBF20  @ =0x00001012
	add r0, r0, r8
	add r0, r7, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	ldr r1, _080BBF24  @ =0x000015DC
	add r1, r1, r8
	strb r5, [r1]
	bl sub_080CF370
	add r0, r5, #0
	bl sub_080C1F70
	ldr r4, _080BBF28  @ =0x000009AD
	add r4, r4, r8
	ldrb r6, [r4]
	mov r0, #0
	strb r0, [r4]
	ldr r3, _080BBF2C  @ =gUnknown_030031D2
	add r1, r5, r3
	mov r0, #9
	strb r0, [r1]
	add r0, r5, #0
	bl SpriteActive_MainLong
	strb r6, [r4]
_080BBEC8:
	sub r7, r7, #1
	ldr r2, _080BBF30  @ =gRam
	cmp r7, #0
	bge _080BBE2A
	mov r7, #15
	ldr r5, _080BBF34  @ =0x00000FA2
	add r4, r2, r5
	ldr r0, _080BBF38  @ =0x00000FF2
	add r3, r2, r0
_080BBEDA:
	add r0, r7, r4
	ldrb r1, [r0]
	cmp r1, #0
	bne _080BBEE6
	add r0, r7, r3
	strb r1, [r0]
_080BBEE6:
	sub r7, r7, #1
	cmp r7, #0
	bge _080BBEDA
	ldr r1, _080BBF3C  @ =0x000016C4
	add r0, r2, r1
	mov r1, #0
	mov r3, sp
	ldrh r3, [r3]
	strh r3, [r0]
	mov r4, #182
	lsl r4, r4, #5
	add r0, r2, r4
	mov r5, sp
	ldrh r5, [r5, #4]
	strh r5, [r0]
	ldr r3, _080BBF40  @ =0x00001702
	add r0, r2, r3
	strb r1, [r0]
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BBF1C:
	.4byte 0x0000079C
_080BBF20:
	.4byte 0x00001012
_080BBF24:
	.4byte 0x000015DC
_080BBF28:
	.4byte 0x000009AD
_080BBF2C:
	.4byte gUnknown_030031D2
_080BBF30:
	.4byte gRam
_080BBF34:
	.4byte 0x00000FA2
_080BBF38:
	.4byte 0x00000FF2
_080BBF3C:
	.4byte 0x000016C4
_080BBF40:
	.4byte 0x00001702
	THUMB_FUNC_END sub_080BBDB0

