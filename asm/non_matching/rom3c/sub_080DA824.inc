	THUMB_FUNC_START sub_080DA824
sub_080DA824: @ 0x080DA824
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080DA8F0  @ =gRam
	ldr r1, _080DA8F4  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r1, [r6]
	cmp r1, #0
	bne _080DA844
	ldr r2, _080DA8F8  @ =0x00000FA2
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	bl sub_08075804
_080DA844:
	ldrb r0, [r6]
	cmp r0, #15
	bhi _080DA884
	ldr r3, _080DA8FC  @ =0x000009D4
	add r1, r5, r3
	mov r0, #127
	strb r0, [r1]
	ldr r0, _080DA900  @ =0x000009B4
	add r1, r5, r0
	mov r0, #6
	strb r0, [r1]
	ldr r2, _080DA904  @ =0x000009B5
	add r1, r5, r2
	mov r0, #16
	strb r0, [r1]
	ldr r3, _080DA908  @ =0x0000051E
	add r1, r5, r3
	mov r0, #64
	strh r0, [r1]
	ldr r0, _080DA90C  @ =0x0000051A
	add r1, r5, r0
	mov r0, #63
	strh r0, [r1]
	ldr r1, _080DA910  @ =0x00000998
	add r0, r5, r1
	mov r1, #7
	strb r1, [r0]
	sub r2, r2, #28
	add r0, r5, r2
	strb r1, [r0]
	bl sub_08133620
_080DA884:
	ldr r3, _080DA914  @ =0x00001152
	add r0, r5, r3
	add r3, r4, r0
	ldrb r1, [r3]
	add r0, r1, #0
	cmp r0, #255
	beq _080DA896
	add r0, r1, #1
	strb r0, [r3]
_080DA896:
	ldr r0, _080DA918  @ =0x00001162
	add r1, r5, r0
	add r1, r4, r1
	ldrb r2, [r1]
	ldrb r0, [r3]
	add r0, r2, r0
	strb r0, [r1]
	ldrb r0, [r3]
	add r2, r2, r0
	mov r0, #128
	lsl r0, r0, #1
	and r2, r2, r0
	cmp r2, #0
	beq _080DA8D2
	ldr r1, _080DA91C  @ =0x00001052
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #7
	bne _080DA8D2
	mov r0, #0
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #106
	bl sub_080CF0AC
_080DA8D2:
	ldr r0, _080DA8F0  @ =gRam
	ldr r2, _080DA920  @ =0x00000F92
	add r1, r0, r2
	add r1, r4, r1
	ldr r2, _080DA924  @ =gUnknown_08175BD8
	ldr r3, _080DA91C  @ =0x00001052
	add r0, r0, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
_080DA8F0:
	.4byte gRam
_080DA8F4:
	.4byte 0x00000FC2
_080DA8F8:
	.4byte 0x00000FA2
_080DA8FC:
	.4byte 0x000009D4
_080DA900:
	.4byte 0x000009B4
_080DA904:
	.4byte 0x000009B5
_080DA908:
	.4byte 0x0000051E
_080DA90C:
	.4byte 0x0000051A
_080DA910:
	.4byte 0x00000998
_080DA914:
	.4byte 0x00001152
_080DA918:
	.4byte 0x00001162
_080DA91C:
	.4byte 0x00001052
_080DA920:
	.4byte 0x00000F92
_080DA924:
	.4byte gUnknown_08175BD8
	THUMB_FUNC_END sub_080DA824

