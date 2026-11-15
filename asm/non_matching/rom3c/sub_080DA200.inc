	THUMB_FUNC_START sub_080DA200
sub_080DA200: @ 0x080DA200
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r8, r5
	mov r0, #3
	mov r1, #176
	bl sub_081337C8
	ldr r6, _080DA264  @ =gRam
	ldr r0, _080DA268  @ =0x00001644
	add r2, r6, r0
	ldrb r0, [r2]
	cmp r0, #15
	bhi _080DA224
	mov r0, #16
	strb r0, [r2]
_080DA224:
	ldr r1, _080DA26C  @ =0x00000FC2
	add r0, r6, r1
	add r7, r5, r0
	ldrb r1, [r7]
	add r4, r1, #0
	cmp r4, #0
	bne _080DA27C
	strb r4, [r2]
	bl sub_08132448
	ldr r2, _080DA270  @ =0x00000FD1
	add r1, r6, r2
	mov r0, #19
	strb r0, [r1]
	ldr r0, _080DA274  @ =0x00000F52
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #80
	strb r0, [r7]
	ldr r1, _080DA278  @ =0x00001052
	add r0, r6, r1
	add r0, r5, r0
	strb r4, [r0]
	mov r0, #76
	mov r1, #0
	bl sub_0812A324
	b _080DA296
	.byte 0x00
	.byte 0x00
_080DA264:
	.4byte gRam
_080DA268:
	.4byte 0x00001644
_080DA26C:
	.4byte 0x00000FC2
_080DA270:
	.4byte 0x00000FD1
_080DA274:
	.4byte 0x00000F52
_080DA278:
	.4byte 0x00001052
_080DA27C:
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080DA296
	ldr r2, _080DA2A0  @ =0x00001002
	add r0, r6, r2
	mov r2, r8
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #9
	beq _080DA296
	add r0, r0, #2
	strb r0, [r1]
_080DA296:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080DA2A0:
	.4byte 0x00001002
	THUMB_FUNC_END sub_080DA200

