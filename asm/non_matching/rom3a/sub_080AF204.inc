	THUMB_FUNC_START sub_080AF204
sub_080AF204: @ 0x080AF204
	push {r4-r6,lr}
	ldr r5, _080AF2CC  @ =gRam
	ldr r0, _080AF2D0  @ =0x000016D5
	add r1, r5, r0
	mov r4, #0
	mov r0, #2
	strb r0, [r1]
	ldr r0, _080AF2D4  @ =0x000017FD
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080AF2D8  @ =0x00001796
	add r0, r5, r1
	strb r4, [r0]
	sub r1, r1, #3
	add r0, r5, r1
	strb r4, [r0]
	ldr r0, _080AF2DC  @ =0x00001794
	add r1, r5, r0
	mov r0, #5
	strb r0, [r1]
	ldr r0, _080AF2E0  @ =gHeartsFiller
	strb r4, [r0]
	sub r0, r0, #5
	strb r4, [r0]
	bl sub_08092F78
	ldr r1, _080AF2E4  @ =0x00001783
	add r0, r5, r1
	strb r4, [r0]
	add r1, r1, #94
	add r0, r5, r1
	strb r4, [r0]
	sub r1, r1, #117
	add r0, r5, r1
	strb r4, [r0]
	sub r1, r1, #114
	add r0, r5, r1
	strb r4, [r0]
	add r1, r1, #128
	add r0, r5, r1
	strb r4, [r0]
	sub r1, r1, #120
	add r0, r5, r1
	strb r4, [r0]
	sub r1, r1, #10
	add r0, r5, r1
	strb r4, [r0]
	ldr r1, _080AF2E8  @ =0x00001805
	add r0, r5, r1
	strb r4, [r0]
	sub r1, r1, #152
	add r0, r5, r1
	strb r4, [r0]
	sub r1, r1, #84
	add r0, r5, r1
	strb r4, [r0]
	ldr r1, _080AF2EC  @ =0x0000188E
	add r0, r5, r1
	strb r4, [r0]
	ldr r0, _080AF2F0  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	beq _080AF28A
	ldr r1, _080AF2F4  @ =0x00001711
	add r0, r5, r1
	strb r4, [r0]
_080AF28A:
	ldr r1, _080AF2F8  @ =0x0000188C
	add r0, r5, r1
	mov r6, #0
	strh r4, [r0]
	mov r0, #8
	bl sub_0809E43C
	ldr r0, _080AF2FC  @ =gBottle1
	ldrb r0, [r0]
	cmp r0, #6
	beq _080AF2C4
	ldr r0, _080AF300  @ =gBottle2
	ldrb r0, [r0]
	cmp r0, #6
	beq _080AF2C4
	ldr r0, _080AF304  @ =gBottle3
	ldrb r0, [r0]
	cmp r0, #6
	beq _080AF2C4
	ldr r0, _080AF308  @ =gBottle4
	ldrb r0, [r0]
	cmp r0, #6
	beq _080AF2C4
	ldr r1, _080AF30C  @ =0x00001A4A
	add r0, r5, r1
	strb r6, [r0]
	add r1, r1, #1
	add r0, r5, r1
	strb r6, [r0]
_080AF2C4:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AF2CC:
	.4byte gRam
_080AF2D0:
	.4byte 0x000016D5
_080AF2D4:
	.4byte 0x000017FD
_080AF2D8:
	.4byte 0x00001796
_080AF2DC:
	.4byte 0x00001794
_080AF2E0:
	.4byte gHeartsFiller
_080AF2E4:
	.4byte 0x00001783
_080AF2E8:
	.4byte 0x00001805
_080AF2EC:
	.4byte 0x0000188E
_080AF2F0:
	.4byte gMoonPearl
_080AF2F4:
	.4byte 0x00001711
_080AF2F8:
	.4byte 0x0000188C
_080AF2FC:
	.4byte gBottle1
_080AF300:
	.4byte gBottle2
_080AF304:
	.4byte gBottle3
_080AF308:
	.4byte gBottle4
_080AF30C:
	.4byte 0x00001A4A
	THUMB_FUNC_END sub_080AF204

