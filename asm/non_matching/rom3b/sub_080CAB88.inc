	THUMB_FUNC_START sub_080CAB88
sub_080CAB88: @ 0x080CAB88
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r2, r2, #24
	lsr r2, r2, #24
	lsl r3, r3, #16
	lsr r6, r3, #16
	mov r5, #7
	bic r5, r5, r6
	mov r4, #1
	lsl r4, r4, r5
	ldrb r5, [r0]
	orr r4, r4, r5
	strb r4, [r0]
	ldr r5, _080CAC30  @ =gRam
	lsl r0, r2, #1
	ldr r7, _080CAC34  @ =0x00001192
	add r4, r5, r7
	add r0, r0, r4
	mov r4, #0
	mov r8, r4
	strh r6, [r0]
	ldr r7, _080CAC38  @ =0x00000FF2
	add r0, r5, r7
	add r0, r2, r0
	strb r1, [r0]
	ldr r1, _080CAC3C  @ =0x00000FA2
	add r0, r5, r1
	add r0, r2, r0
	mov r1, #8
	strb r1, [r0]
	ldr r4, _080CAC40  @ =0x00000EE2
	add r0, r5, r4
	add r0, r2, r0
	lsl r1, r6, #4
	strb r1, [r0]
	ldr r7, _080CAC44  @ =0x00000ED2
	add r0, r5, r7
	add r0, r2, r0
	mov r1, #240
	and r6, r6, r1
	strb r6, [r0]
	ldr r0, _080CAC48  @ =0x00000F02
	add r4, r5, r0
	add r4, r2, r4
	lsr r3, r3, #24
	mov r0, #3
	and r0, r0, r3
	strb r0, [r4]
	add r7, r7, #32
	add r1, r5, r7
	add r1, r2, r1
	lsr r3, r3, #2
	strb r3, [r1]
	ldr r3, _080CAC4C  @ =0x00001601
	add r0, r5, r3
	ldrb r0, [r0]
	ldrb r7, [r4]
	add r0, r0, r7
	strb r0, [r4]
	add r3, r3, #2
	add r0, r5, r3
	ldrb r0, [r0]
	ldrb r4, [r1]
	add r0, r0, r4
	strb r0, [r1]
	ldr r7, _080CAC50  @ =0x000010F2
	add r0, r5, r7
	add r0, r2, r0
	mov r1, r8
	strb r1, [r0]
	ldr r3, _080CAC54  @ =0x00001002
	add r0, r5, r3
	add r0, r2, r0
	strb r1, [r0]
	ldr r4, _080CAC58  @ =0x00000E85
	add r5, r5, r4
	add r2, r2, r5
	strb r1, [r2]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080CAC30:
	.4byte gRam
_080CAC34:
	.4byte 0x00001192
_080CAC38:
	.4byte 0x00000FF2
_080CAC3C:
	.4byte 0x00000FA2
_080CAC40:
	.4byte 0x00000EE2
_080CAC44:
	.4byte 0x00000ED2
_080CAC48:
	.4byte 0x00000F02
_080CAC4C:
	.4byte 0x00001601
_080CAC50:
	.4byte 0x000010F2
_080CAC54:
	.4byte 0x00001002
_080CAC58:
	.4byte 0x00000E85
	THUMB_FUNC_END sub_080CAB88

