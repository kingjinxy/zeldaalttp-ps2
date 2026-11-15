	THUMB_FUNC_START sub_080BA1C8
sub_080BA1C8: @ 0x080BA1C8
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r5, #0
	ldr r4, _080BA2AC  @ =gRam
_080BA1D4:
	ldr r1, _080BA2B0  @ =0x00000FC2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r2, [r0]
	cmp r2, #0
	bne _080BA21C
	mov r1, #96
	strb r1, [r0]
	ldr r3, _080BA2B4  @ =0x00000FA2
	add r0, r4, r3
	add r0, r5, r0
	strb r1, [r0]
	ldr r1, _080BA2B8  @ =0x00000F22
	add r0, r4, r1
	add r0, r5, r0
	strb r2, [r0]
	ldr r2, _080BA2BC  @ =0x00000EE2
	add r0, r4, r2
	add r0, r5, r0
	mov r1, #238
	strb r1, [r0]
	sub r3, r3, #160
	add r0, r4, r3
	add r0, r5, r0
	mov r1, #4
	strb r1, [r0]
	ldr r1, _080BA2C0  @ =0x00000ED2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #24
	strb r1, [r0]
	add r2, r2, #16
	add r0, r4, r2
	add r0, r5, r0
	mov r1, #11
	strb r1, [r0]
_080BA21C:
	ldr r3, _080BA2B4  @ =0x00000FA2
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080BA278
	ldr r1, _080BA2C4  @ =0x00000F12
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #248
	strb r1, [r0]
	ldr r2, _080BA2C8  @ =0x000015DC
	add r0, r4, r2
	strb r5, [r0]
	add r0, r5, #0
	bl sub_080CA58C
	ldr r3, _080BA2CC  @ =0x00000996
	add r0, r4, r3
	ldrb r1, [r0]
	mov r2, #1
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080BA26E
	sub r3, r3, #54
	add r0, r4, r3
	strb r5, [r0]
	lsl r0, r1, #24
	lsr r0, r0, #29
	eor r0, r0, r5
	and r0, r0, r2
	ldr r1, _080BA2B8  @ =0x00000F22
	add r2, r4, r1
	add r2, r5, r2
	ldr r1, _080BA2D0  @ =gUnknown_08170FC5
	add r0, r0, r1
	ldrb r0, [r0]
	ldrb r3, [r2]
	add r0, r0, r3
	strb r0, [r2]
_080BA26E:
	add r0, r5, #0
	mov r1, #16
	mov r2, #1
	bl sub_080BD874
_080BA278:
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #4
	bls _080BA1D4
_080BA282:
	ldr r1, _080BA2AC  @ =gRam
	ldr r2, _080BA2D4  @ =0x00000F62
	add r0, r1, r2
	add r0, r5, r0
	ldrb r3, [r0]
	add r2, r2, #96
	add r0, r1, r2
	add r2, r5, r0
	ldrb r0, [r2]
	add r4, r1, #0
	cmp r0, #0
	bne _080BA304
	cmp r5, #5
	bne _080BA2E0
	ldr r1, _080BA2D8  @ =0x00000FC7
	add r0, r4, r1
	ldr r1, _080BA2DC  @ =gUnknown_08170FC7
	add r1, r3, r1
	ldrb r1, [r1]
	strb r1, [r0]
	b _080BA2E8
_080BA2AC:
	.4byte gRam
_080BA2B0:
	.4byte 0x00000FC2
_080BA2B4:
	.4byte 0x00000FA2
_080BA2B8:
	.4byte 0x00000F22
_080BA2BC:
	.4byte 0x00000EE2
_080BA2C0:
	.4byte 0x00000ED2
_080BA2C4:
	.4byte 0x00000F12
_080BA2C8:
	.4byte 0x000015DC
_080BA2CC:
	.4byte 0x00000996
_080BA2D0:
	.4byte gUnknown_08170FC5
_080BA2D4:
	.4byte 0x00000F62
_080BA2D8:
	.4byte 0x00000FC7
_080BA2DC:
	.4byte gUnknown_08170FC7
_080BA2E0:
	ldr r0, _080BA330  @ =gUnknown_08170FCB
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r2]
_080BA2E8:
	ldr r0, _080BA334  @ =0x00000F62
	add r2, r4, r0
	add r2, r5, r2
	add r0, r3, #1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
	ldr r2, _080BA338  @ =0x00000F92
	add r1, r4, r2
	add r1, r5, r1
	ldrb r0, [r1]
	mov r2, #1
	eor r0, r0, r2
	strb r0, [r1]
_080BA304:
	cmp r5, #5
	bne _080BA348
	ldr r4, _080BA33C  @ =gRam
	ldr r3, _080BA340  @ =0x00001127
	add r1, r4, r3
	mov r0, #49
	strb r0, [r1]
	mov r0, #16
	bl sub_080CF370
	ldr r0, _080BA344  @ =0x000015DC
	add r4, r4, r0
	strb r5, [r4]
	mov r0, #5
	bl sub_080C1F70
	mov r0, #5
	bl SpriteActive_MainLong
	mov r5, #6
	b _080BA282
	.byte 0x00
	.byte 0x00
_080BA330:
	.4byte gUnknown_08170FCB
_080BA334:
	.4byte 0x00000F62
_080BA338:
	.4byte 0x00000F92
_080BA33C:
	.4byte gRam
_080BA340:
	.4byte 0x00001127
_080BA344:
	.4byte 0x000015DC
_080BA348:
	add r0, r5, #0
	mov r1, #18
	mov r2, #2
	bl sub_080BD874
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080BA3C8  @ =gRam
	mov r1, #0
	mov r9, r1
	ldr r2, _080BA3CC  @ =0x000009AD
	add r7, r6, r2
	ldr r3, _080BA3D0  @ =0x00000FA2
	add r3, r3, r6
	mov r8, r3
_080BA368:
	ldr r0, _080BA3D4  @ =0x00001122
	add r1, r6, r0
	add r1, r5, r1
	ldr r0, _080BA3D8  @ =gUnknown_08170FD3
	sub r2, r5, #7
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _080BA3DC  @ =0x00000FB2
	add r1, r6, r3
	add r1, r5, r1
	ldr r0, _080BA3E0  @ =gUnknown_08170FD7
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080BA3E4  @ =gUnknown_08170FCF
	add r2, r2, r0
	ldrb r0, [r2]
	ldr r2, _080BA3E8  @ =0x000015DC
	add r1, r6, r2
	strb r5, [r1]
	bl sub_080CF370
	add r0, r5, #0
	bl sub_080C1F70
	ldrb r4, [r7]
	mov r3, r9
	strb r3, [r7]
	mov r0, r8
	add r1, r5, r0
	mov r0, #9
	strb r0, [r1]
	add r0, r5, #0
	bl SpriteActive_MainLong
	strb r4, [r7]
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #10
	bls _080BA368
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080BA3C8:
	.4byte gRam
_080BA3CC:
	.4byte 0x000009AD
_080BA3D0:
	.4byte 0x00000FA2
_080BA3D4:
	.4byte 0x00001122
_080BA3D8:
	.4byte gUnknown_08170FD3
_080BA3DC:
	.4byte 0x00000FB2
_080BA3E0:
	.4byte gUnknown_08170FD7
_080BA3E4:
	.4byte gUnknown_08170FCF
_080BA3E8:
	.4byte 0x000015DC
	THUMB_FUNC_END sub_080BA1C8

