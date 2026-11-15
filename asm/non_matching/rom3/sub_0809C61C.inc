	THUMB_FUNC_START sub_0809C61C
sub_0809C61C: @ 0x0809C61C
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	ldr r4, _0809C65C  @ =gRam
	ldr r1, _0809C660  @ =0x00001702
	add r0, r4, r1
	mov r2, #0
	strb r2, [r0]
	sub r1, r1, #10
	add r0, r4, r1
	strb r2, [r0]
	ldr r1, _0809C664  @ =0x00001805
	add r0, r4, r1
	strb r2, [r0]
	ldr r0, _0809C668  @ =0x000016EA
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #225
	bhi _0809C6C4
	ldrb r0, [r1]
	cmp r0, #160
	beq _0809C684
	cmp r0, #160
	bgt _0809C66C
	cmp r0, #0
	beq _0809C672
	b _0809C6CC
	.byte 0x00
	.byte 0x00
_0809C65C:
	.4byte gRam
_0809C660:
	.4byte 0x00001702
_0809C664:
	.4byte 0x00001805
_0809C668:
	.4byte 0x000016EA
_0809C66C:
	cmp r0, #223
	beq _0809C6B4
	b _0809C6CC
_0809C672:
	mov r0, #4
	mov r1, #41
	mov r2, #5
	bl sub_080ADD38
	ldr r0, _0809C680  @ =0x00001770
	b _0809C6B6
_0809C680:
	.4byte 0x00001770
_0809C684:
	ldr r1, _0809C6B0  @ =0x000016C4
	add r5, r4, r1
	ldrh r0, [r5]
	mov r8, r0
	sub r1, r1, #4
	add r4, r4, r1
	ldrh r6, [r4]
	mov r0, #235
	lsl r0, r0, #4
	strh r0, [r4]
	mov r0, #222
	lsl r0, r0, #2
	strh r0, [r5]
	mov r0, #0
	mov r1, #25
	bl sub_08120460
	mov r0, r8
	strh r0, [r5]
	strh r6, [r4]
	b _0809C6CC
	.byte 0x00
	.byte 0x00
_0809C6B0:
	.4byte 0x000016C4
_0809C6B4:
	ldr r0, _0809C6C0  @ =0x00001885
_0809C6B6:
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	b _0809C6CC
	.byte 0x00
	.byte 0x00
_0809C6C0:
	.4byte 0x00001885
_0809C6C4:
	strb r2, [r1]
	ldr r1, _0809C6D8  @ =0x000016EB
	add r0, r4, r1
	strb r2, [r0]
_0809C6CC:
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809C6D8:
	.4byte 0x000016EB
	THUMB_FUNC_END sub_0809C61C

