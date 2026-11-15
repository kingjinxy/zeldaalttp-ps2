	THUMB_FUNC_START sub_080C7384
sub_080C7384: @ 0x080C7384
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r7, r5, #0
	lsl r1, r1, #24
	lsr r6, r1, #24
	mov r8, r6
	add r0, r5, #0
	add r1, r6, #0
	bl sub_080C7AB8
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C7474
	ldr r3, _080C73F8  @ =gRam
	ldr r0, _080C73FC  @ =0x00001042
	add r2, r3, r0
	add r2, r5, r2
	ldr r0, _080C7400  @ =gUnknown_08172244
	add r0, r6, r0
	ldrb r1, [r2]
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	ldr r1, _080C7404  @ =0x00001002
	add r0, r3, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #4
	bhi _080C7474
	ldr r1, _080C7408  @ =0x00001072
	add r0, r3, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C7418
	ldr r0, _080C740C  @ =0x00000ED2
	add r4, r3, r0
	add r4, r5, r4
	ldrb r1, [r4]
	add r0, r0, #32
	add r3, r3, r0
	add r3, r5, r3
	ldrb r0, [r3]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r0, _080C7410  @ =gUnknown_08172248
	add r0, r6, r0
	ldrb r2, [r0]
	ldr r0, _080C7414  @ =gUnknown_0817224C
	add r0, r6, r0
	ldrb r0, [r0]
	b _080C7468
	.byte 0x00
	.byte 0x00
_080C73F8:
	.4byte gRam
_080C73FC:
	.4byte 0x00001042
_080C7400:
	.4byte gUnknown_08172244
_080C7404:
	.4byte 0x00001002
_080C7408:
	.4byte 0x00001072
_080C740C:
	.4byte 0x00000ED2
_080C7410:
	.4byte gUnknown_08172248
_080C7414:
	.4byte gUnknown_0817224C
_080C7418:
	ldr r1, _080C7480  @ =0x00000ED2
	add r4, r3, r1
	add r4, r7, r4
	ldrb r1, [r4]
	ldr r0, _080C7484  @ =0x00000EF2
	add r3, r3, r0
	add r3, r7, r3
	ldrb r0, [r3]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r6, _080C7488  @ =gUnknown_08172248
	add r6, r6, r8
	ldrb r2, [r6]
	ldr r5, _080C748C  @ =gUnknown_0817224C
	add r5, r5, r8
	ldrb r0, [r5]
	lsl r0, r0, #8
	add r2, r2, r0
	add r1, r1, r2
	strb r1, [r4]
	lsr r1, r1, #8
	strb r1, [r3]
	ldrb r1, [r4]
	ldrb r0, [r3]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldrb r2, [r6]
	ldrb r0, [r5]
	lsl r0, r0, #8
	add r2, r2, r0
	add r1, r1, r2
	strb r1, [r4]
	lsr r1, r1, #8
	strb r1, [r3]
	ldrb r1, [r4]
	ldrb r0, [r3]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldrb r2, [r6]
	ldrb r0, [r5]
_080C7468:
	lsl r0, r0, #8
	add r2, r2, r0
	add r1, r1, r2
	strb r1, [r4]
	lsr r1, r1, #8
	strb r1, [r3]
_080C7474:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C7480:
	.4byte 0x00000ED2
_080C7484:
	.4byte 0x00000EF2
_080C7488:
	.4byte gUnknown_08172248
_080C748C:
	.4byte gUnknown_0817224C
	THUMB_FUNC_END sub_080C7384

