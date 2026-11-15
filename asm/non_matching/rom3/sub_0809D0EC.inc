	THUMB_FUNC_START sub_0809D0EC
sub_0809D0EC: @ 0x0809D0EC
	push {r4-r6,lr}
	ldr r2, _0809D130  @ =gRam
	ldr r1, _0809D134  @ =0x00000545
	add r0, r2, r1
	ldrb r1, [r0]
	mov r3, #128
	add r0, r3, #0
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r2, #0
	cmp r4, #0
	bne _0809D140
	ldr r2, _0809D138  @ =0x00001739
	add r5, r6, r2
	ldrb r0, [r5]
	cmp r0, #47
	bls _0809D164
	cmp r0, #95
	bls _0809D11A
	ldr r1, _0809D13C  @ =0x000017A8
	add r0, r6, r1
	strb r3, [r0]
_0809D11A:
	bl sub_08092BF4
	strb r4, [r5]
	mov r0, #0
	mov r1, #42
	mov r2, #0
	bl sub_080AC344
	bl sub_0809CE14
	b _0809D340
_0809D130:
	.4byte gRam
_0809D134:
	.4byte 0x00000545
_0809D138:
	.4byte 0x00001739
_0809D13C:
	.4byte 0x000017A8
_0809D140:
	ldr r2, _0809D16C  @ =0x000016FA
	add r0, r6, r2
	ldrb r1, [r0]
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0809D156
	mov r0, #9
	and r0, r0, r1
	cmp r0, #0
	bne _0809D174
_0809D156:
	ldr r3, _0809D170  @ =0x000016F9
	add r0, r6, r3
	ldrb r3, [r0]
	cmp r3, #0
	beq _0809D228
	cmp r3, #1
	bne _0809D174
_0809D164:
	bl sub_08092BF4
	b _0809D340
	.byte 0x00
	.byte 0x00
_0809D16C:
	.4byte 0x000016FA
_0809D170:
	.4byte 0x000016F9
_0809D174:
	ldr r0, _0809D1E0  @ =0x000016EA
	add r2, r6, r0
	ldrb r0, [r2]
	cmp r0, #9
	bne _0809D18C
	mov r1, #10
	strb r1, [r2]
	ldr r0, _0809D1E4  @ =gUnknown_0816808C
	ldrb r1, [r0, #10]
	ldr r3, _0809D1E8  @ =0x000016EB
	add r0, r6, r3
	strb r1, [r0]
_0809D18C:
	ldr r0, _0809D1E8  @ =0x000016EB
	add r1, r6, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	blt _0809D19E
	b _0809D33C
_0809D19E:
	ldrb r0, [r2]
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #13
	bne _0809D202
	ldr r0, _0809D1EC  @ =gSword
	ldrb r0, [r0]
	add r0, r0, #1
	mov r1, #254
	and r0, r0, r1
	cmp r0, #0
	beq _0809D200
	ldr r1, _0809D1F0  @ =0x000016FA
	add r4, r6, r1
	ldrb r1, [r4]
	mov r0, #9
	and r0, r0, r1
	cmp r0, #0
	beq _0809D200
	mov r0, #1
	mov r1, #27
	bl sub_080ABC3C
	ldrb r1, [r4]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _0809D1F4
	mov r0, #113
	bl sub_0809E43C
	b _0809D1FA
_0809D1E0:
	.4byte 0x000016EA
_0809D1E4:
	.4byte gUnknown_0816808C
_0809D1E8:
	.4byte 0x000016EB
_0809D1EC:
	.4byte gSword
_0809D1F0:
	.4byte 0x000016FA
_0809D1F4:
	mov r0, #9
	bl sub_0809E43C
_0809D1FA:
	mov r0, #1
	bl sub_0809EEB4
_0809D200:
	mov r2, #10
_0809D202:
	ldr r1, _0809D218  @ =gRam
	ldr r3, _0809D21C  @ =0x000016EA
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _0809D220  @ =gUnknown_0816808C
	add r0, r2, r0
	ldrb r0, [r0]
	ldr r2, _0809D224  @ =0x000016EB
	add r1, r1, r2
	strb r0, [r1]
	b _0809D33C
_0809D218:
	.4byte gRam
_0809D21C:
	.4byte 0x000016EA
_0809D220:
	.4byte gUnknown_0816808C
_0809D224:
	.4byte 0x000016EB
_0809D228:
	ldr r0, _0809D2E0  @ =0x000016EA
	add r1, r6, r0
	mov r0, #9
	strb r0, [r1]
	ldr r1, _0809D2E4  @ =0x00001705
	add r2, r6, r1
	ldrb r1, [r2]
	mov r0, #1
	orr r0, r0, r1
	strb r0, [r2]
	ldr r2, _0809D2E8  @ =0x000016EB
	add r0, r6, r2
	strb r3, [r0]
	ldr r3, _0809D2EC  @ =0x00001719
	add r1, r6, r3
	ldrb r0, [r1]
	cmp r0, #4
	beq _0809D33C
	cmp r0, #16
	beq _0809D33C
	mov r0, #12
	strb r0, [r1]
	ldr r0, _0809D2F0  @ =gSword
	ldrb r0, [r0]
	add r0, r0, #1
	mov r1, #254
	and r0, r0, r1
	cmp r0, #0
	beq _0809D340
	mov r1, #4
	ldr r0, _0809D2F4  @ =0x00000E15
	add r2, r6, r0
_0809D268:
	add r0, r1, r2
	ldrb r3, [r0]
	add r0, r3, #0
	sub r0, r0, #48
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bls _0809D340
	cmp r3, #68
	beq _0809D340
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _0809D268
	ldr r1, _0809D2F8  @ =gRam
	ldr r2, _0809D2FC  @ =0x00001739
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #5
	bls _0809D2A4
	ldr r3, _0809D300  @ =0x00000996
	add r0, r1, r3
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0809D2A4
	bl sub_080B008C
_0809D2A4:
	ldr r0, _0809D304  @ =gUnknown_020023F0
	ldrb r0, [r0]
	cmp r0, #1
	bne _0809D308
	ldr r0, _0809D2F8  @ =gRam
	ldr r1, _0809D2FC  @ =0x00001739
	add r4, r0, r1
	ldrb r3, [r4]
	add r6, r0, #0
	cmp r3, #95
	bls _0809D316
	cmp r3, #96
	bne _0809D2CA
	mov r0, #25
	bl sub_0809E43C
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_0809D2CA:
	ldr r2, _0809D300  @ =0x00000996
	add r0, r6, r2
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _0809D340
	bl sub_081163C8
	b _0809D340
	.byte 0x00
	.byte 0x00
_0809D2E0:
	.4byte 0x000016EA
_0809D2E4:
	.4byte 0x00001705
_0809D2E8:
	.4byte 0x000016EB
_0809D2EC:
	.4byte 0x00001719
_0809D2F0:
	.4byte gSword
_0809D2F4:
	.4byte 0x00000E15
_0809D2F8:
	.4byte gRam
_0809D2FC:
	.4byte 0x00001739
_0809D300:
	.4byte 0x00000996
_0809D304:
	.4byte gUnknown_020023F0
_0809D308:
	ldr r0, _0809D334  @ =gRam
	ldr r3, _0809D338  @ =0x00001739
	add r1, r0, r3
	ldrb r1, [r1]
	add r6, r0, #0
	cmp r1, #63
	bhi _0809D340
_0809D316:
	ldr r0, _0809D338  @ =0x00001739
	add r1, r6, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #48
	bne _0809D340
	mov r0, #25
	bl sub_0809E43C
	bl sub_081163C8
	b _0809D340
_0809D334:
	.4byte gRam
_0809D338:
	.4byte 0x00001739
_0809D33C:
	bl sub_0809D348
_0809D340:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0809D0EC

	.byte 0x00
	.byte 0x00
