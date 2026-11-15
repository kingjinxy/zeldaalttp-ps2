	THUMB_FUNC_START sub_080972EC
sub_080972EC: @ 0x080972EC
	push {r4,lr}
	ldr r0, _08097340  @ =gRam
	ldr r2, _08097344  @ =0x00000B14
	add r1, r0, r2
	ldrh r1, [r1]
	add r3, r0, #0
	cmp r1, #0
	beq _0809739C
	ldr r4, _08097348  @ =0x000016C8
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809730A
	cmp r0, #255
	bne _0809739C
_0809730A:
	ldr r1, _0809734C  @ =0x000017AE
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #3
	bne _0809739C
	ldr r2, _08097350  @ =0x00001718
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #19
	beq _0809739C
	ldr r4, _08097354  @ =0x0000179A
	add r0, r3, r4
	ldrh r1, [r0]
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #0
	beq _08097364
	lsl r0, r1, #24
	cmp r0, #0
	bge _08097358
	sub r4, r4, #115
	add r2, r3, r4
	ldrb r1, [r2]
	mov r0, #8
	b _08097360
_08097340:
	.4byte gRam
_08097344:
	.4byte 0x00000B14
_08097348:
	.4byte 0x000016C8
_0809734C:
	.4byte 0x000017AE
_08097350:
	.4byte 0x00001718
_08097354:
	.4byte 0x0000179A
_08097358:
	ldr r0, _08097384  @ =0x00001727
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #4
_08097360:
	orr r0, r0, r1
	strb r0, [r2]
_08097364:
	add r2, r3, #0
	ldr r1, _08097388  @ =0x0000179C
	add r0, r2, r1
	ldrh r1, [r0]
	mov r4, #0
	ldrsh r0, [r0, r4]
	cmp r0, #0
	beq _08097398
	lsl r0, r1, #24
	cmp r0, #0
	bge _0809738C
	ldr r0, _08097384  @ =0x00001727
	add r2, r2, r0
	ldrb r1, [r2]
	mov r0, #2
	b _08097394
_08097384:
	.4byte 0x00001727
_08097388:
	.4byte 0x0000179C
_0809738C:
	ldr r1, _080973A4  @ =0x00001727
	add r2, r3, r1
	ldrb r1, [r2]
	mov r0, #1
_08097394:
	orr r0, r0, r1
	strb r0, [r2]
_08097398:
	bl sub_0809E7D4
_0809739C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080973A4:
	.4byte 0x00001727
	THUMB_FUNC_END sub_080972EC

