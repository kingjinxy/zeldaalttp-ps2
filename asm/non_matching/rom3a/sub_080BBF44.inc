	THUMB_FUNC_START sub_080BBF44
sub_080BBF44: @ 0x080BBF44
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	bl sub_080BDB54
	mov r4, #7
	ldr r0, _080BBF64  @ =gRam
	ldr r1, _080BBF68  @ =0x00000E75
	add r7, r0, r1
	ldr r1, _080BBF6C  @ =0x00000FF9
	add r5, r0, r1
_080BBF5A:
	cmp r4, #4
	ble _080BBF70
	mov r0, #85
	b _080BBF72
	.byte 0x00
	.byte 0x00
_080BBF64:
	.4byte gRam
_080BBF68:
	.4byte 0x00000E75
_080BBF6C:
	.4byte 0x00000FF9
_080BBF70:
	mov r0, #8
_080BBF72:
	strb r0, [r5]
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CEB84
	add r2, r4, r7
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	sub r5, r5, #1
	sub r4, r4, #1
	cmp r4, #0
	bge _080BBF5A
	add r0, r6, #0
	bl sub_080B9454
	mov r4, #7
	ldr r6, _080BBFAC  @ =gUnknown_03003222
	mov r5, #224
	lsl r5, r5, #19
_080BBF9C:
	add r0, r4, r6
	ldrb r0, [r0]
	cmp r0, #85
	bne _080BBFB0
	lsr r0, r5, #24
	bl sub_080E8AEC
	b _080BBFB6
_080BBFAC:
	.4byte gUnknown_03003222
_080BBFB0:
	lsr r0, r5, #24
	bl sub_080E6B14
_080BBFB6:
	mov r0, #255
	lsl r0, r0, #24
	add r5, r5, r0
	sub r4, r4, #1
	cmp r4, #0
	bge _080BBF9C
	mov r4, #15
	ldr r1, _080BBFE4  @ =gUnknown_03003222
	add r3, r1, #0
	sub r3, r3, #80
	mov r2, #9
_080BBFCC:
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080BBFD8
	add r0, r4, r3
	strb r2, [r0]
_080BBFD8:
	sub r4, r4, #1
	cmp r4, #0
	bge _080BBFCC
	pop {r4-r7}
	pop {r0}
	bx r0
_080BBFE4:
	.4byte gUnknown_03003222
	THUMB_FUNC_END sub_080BBF44

