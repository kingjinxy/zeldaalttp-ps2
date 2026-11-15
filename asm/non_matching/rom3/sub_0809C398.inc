	THUMB_FUNC_START sub_0809C398
sub_0809C398: @ 0x0809C398
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r3, _0809C440  @ =gRam
	ldr r0, _0809C444  @ =0x00001605
	add r1, r3, r0
	ldrb r0, [r1]
	add r0, r0, #1
	mov r2, #0
	strb r0, [r1]
	ldr r1, _0809C448  @ =0x000016CD
	add r0, r3, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r3, r1
	strb r2, [r0]
	ldr r2, _0809C44C  @ =0x000017A6
	add r7, r3, r2
	ldrh r1, [r7]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	mov r1, #160
	lsl r1, r1, #4
	cmp r0, r1
	bne _0809C472
	ldr r0, _0809C450  @ =0x000017F3
	add r0, r0, r3
	mov r10, r0
	ldrb r0, [r0]
	ldr r1, _0809C454  @ =0x000016CF
	add r1, r1, r3
	mov r8, r1
	strb r0, [r1]
	add r2, r2, #78
	add r2, r2, r3
	mov r9, r2
	ldrb r0, [r2]
	ldr r1, _0809C458  @ =0x0000174C
	add r5, r3, r1
	strh r0, [r5]
	ldr r2, _0809C45C  @ =0x000017F6
	add r6, r3, r2
	ldrh r0, [r6]
	sub r1, r1, #132
	add r4, r3, r1
	strb r0, [r4]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r3, r2
	mov r1, #2
	strb r1, [r0]
	ldr r2, _0809C460  @ =0x00001702
	add r0, r3, r2
	strb r1, [r0]
	bl sub_0809A138
	bl sub_080978AC
	mov r0, r8
	ldrb r1, [r0]
	mov r2, r10
	strb r1, [r2]
	ldrh r0, [r5]
	mov r2, r9
	strb r0, [r2]
	ldrb r0, [r4]
	strh r0, [r6]
	mov r0, #0
	ldrsb r0, [r4, r0]
	cmp r0, #0
	blt _0809C482
	lsl r0, r1, #24
	cmp r0, #0
	blt _0809C464
	ldrh r1, [r7]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	add r0, r0, #20
	strh r0, [r7]
	b _0809C524
_0809C440:
	.4byte gRam
_0809C444:
	.4byte 0x00001605
_0809C448:
	.4byte 0x000016CD
_0809C44C:
	.4byte 0x000017A6
_0809C450:
	.4byte 0x000017F3
_0809C454:
	.4byte 0x000016CF
_0809C458:
	.4byte 0x0000174C
_0809C45C:
	.4byte 0x000017F6
_0809C460:
	.4byte 0x00001702
_0809C464:
	ldrh r1, [r7]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	add r0, r0, #21
	strh r0, [r7]
	b _0809C524
_0809C472:
	ldr r0, _0809C4A8  @ =0x000016EB
	add r1, r3, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809C524
_0809C482:
	ldr r0, _0809C4AC  @ =gRam
	ldr r1, _0809C4B0  @ =0x000017A6
	add r2, r0, r1
	mov r1, #128
	lsl r1, r1, #1
	add r0, r1, #0
	ldrh r1, [r2]
	add r0, r0, r1
	strh r0, [r2]
	mov r1, #255
	lsl r1, r1, #8
	and r0, r0, r1
	lsr r4, r0, #8
	cmp r4, #4
	bne _0809C4B4
	mov r0, #107
	bl sub_0809E49C
	b _0809C4D8
_0809C4A8:
	.4byte 0x000016EB
_0809C4AC:
	.4byte gRam
_0809C4B0:
	.4byte 0x000017A6
_0809C4B4:
	cmp r4, #10
	bne _0809C4C0
	mov r0, #15
	bl sub_0809E43C
	b _0809C4D8
_0809C4C0:
	cmp r4, #11
	bne _0809C4CC
	mov r0, #41
	bl sub_0809E43C
	b _0809C4D8
_0809C4CC:
	cmp r4, #12
	bne _0809C4D8
	mov r0, #176
	lsl r0, r0, #4
	strh r0, [r2]
	mov r4, #11
_0809C4D8:
	ldr r5, _0809C534  @ =gRam
	ldr r0, _0809C538  @ =gUnknown_08168030
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _0809C53C  @ =0x000016EB
	add r0, r5, r2
	strb r1, [r0]
	ldr r0, _0809C540  @ =0x000017A6
	add r2, r5, r0
	ldrh r0, [r2]
	mov r1, #255
	lsl r1, r1, #8
	and r1, r1, r0
	ldr r0, _0809C544  @ =gUnknown_08168024
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r1
	mov r6, #0
	strh r0, [r2]
	ldr r2, _0809C548  @ =0x000017B0
	add r1, r5, r2
	ldrh r0, [r1]
	cmp r0, #0
	bne _0809C524
	cmp r4, #11
	bne _0809C524
	mov r0, #1
	strh r0, [r1]
	mov r0, #0
	mov r1, #28
	bl sub_080AE12C
	ldr r1, _0809C54C  @ =0x00001702
	add r0, r5, r1
	strb r6, [r0]
	ldr r2, _0809C550  @ =0x000016F8
	add r0, r5, r2
	strb r6, [r0]
_0809C524:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809C534:
	.4byte gRam
_0809C538:
	.4byte gUnknown_08168030
_0809C53C:
	.4byte 0x000016EB
_0809C540:
	.4byte 0x000017A6
_0809C544:
	.4byte gUnknown_08168024
_0809C548:
	.4byte 0x000017B0
_0809C54C:
	.4byte 0x00001702
_0809C550:
	.4byte 0x000016F8
	THUMB_FUNC_END sub_0809C398

