	THUMB_FUNC_START sub_080C7278
sub_080C7278: @ 0x080C7278
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
	beq _080C7368
	ldr r3, _080C72EC  @ =gRam
	ldr r0, _080C72F0  @ =0x00001042
	add r2, r3, r0
	add r2, r5, r2
	ldr r0, _080C72F4  @ =gUnknown_08172244
	add r0, r6, r0
	ldrb r1, [r2]
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	ldr r1, _080C72F8  @ =0x00001002
	add r0, r3, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #4
	bhi _080C7368
	ldr r1, _080C72FC  @ =0x00001072
	add r0, r3, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C730C
	ldr r0, _080C7300  @ =0x00000EE2
	add r4, r3, r0
	add r4, r5, r4
	ldrb r1, [r4]
	add r0, r0, #32
	add r3, r3, r0
	add r3, r5, r3
	ldrb r0, [r3]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r0, _080C7304  @ =gUnknown_08172248
	add r0, r6, r0
	ldrb r2, [r0]
	ldr r0, _080C7308  @ =gUnknown_0817224C
	add r0, r6, r0
	ldrb r0, [r0]
	b _080C735C
	.byte 0x00
	.byte 0x00
_080C72EC:
	.4byte gRam
_080C72F0:
	.4byte 0x00001042
_080C72F4:
	.4byte gUnknown_08172244
_080C72F8:
	.4byte 0x00001002
_080C72FC:
	.4byte 0x00001072
_080C7300:
	.4byte 0x00000EE2
_080C7304:
	.4byte gUnknown_08172248
_080C7308:
	.4byte gUnknown_0817224C
_080C730C:
	ldr r1, _080C7374  @ =0x00000EE2
	add r4, r3, r1
	add r4, r7, r4
	ldrb r1, [r4]
	ldr r0, _080C7378  @ =0x00000F02
	add r3, r3, r0
	add r3, r7, r3
	ldrb r0, [r3]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r6, _080C737C  @ =gUnknown_08172248
	add r6, r6, r8
	ldrb r2, [r6]
	ldr r5, _080C7380  @ =gUnknown_0817224C
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
_080C735C:
	lsl r0, r0, #8
	add r2, r2, r0
	add r1, r1, r2
	strb r1, [r4]
	lsr r1, r1, #8
	strb r1, [r3]
_080C7368:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C7374:
	.4byte 0x00000EE2
_080C7378:
	.4byte 0x00000F02
_080C737C:
	.4byte gUnknown_08172248
_080C7380:
	.4byte gUnknown_0817224C
	THUMB_FUNC_END sub_080C7278

