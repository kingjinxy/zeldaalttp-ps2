	THUMB_FUNC_START sub_080A2228
sub_080A2228: @ 0x080A2228
	push {r4-r6,lr}
	ldr r2, _080A2254  @ =gRam
	ldr r1, _080A2258  @ =0x000016E8
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A22EE
	ldr r3, _080A225C  @ =0x0000172C
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A2246
	b _080A235A
_080A2246:
	ldr r1, _080A2260  @ =0x000016F8
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A2264
	mov r0, #0
	b _080A2268
_080A2254:
	.4byte gRam
_080A2258:
	.4byte 0x000016E8
_080A225C:
	.4byte 0x0000172C
_080A2260:
	.4byte 0x000016F8
_080A2264:
	bl sub_080A1ADC
_080A2268:
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A235A
	mov r0, #0
	bl sub_080A3B64
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A234C
	ldr r2, _080A22AC  @ =gRam
	ldr r3, _080A22B0  @ =0x00000A58
	add r0, r2, r3
	ldrh r0, [r0]
	cmp r0, #0
	bne _080A234C
	mov r1, #191
	lsl r1, r1, #5
	add r0, r2, r1
	mov r1, #1
	strb r1, [r0]
	ldr r3, _080A22B4  @ =0x00001790
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #1
	bne _080A22B8
	mov r0, #2
	bl sub_080C1970
	mov r0, #5
	mov r1, #1
	bl sub_080BEA28
	b _080A22CC
	.byte 0x00
	.byte 0x00
_080A22AC:
	.4byte gRam
_080A22B0:
	.4byte 0x00000A58
_080A22B4:
	.4byte 0x00001790
_080A22B8:
	cmp r0, #2
	bne _080A22CC
	mov r0, #1
	mov r1, #11
	bl sub_080AC6E0
	mov r0, #6
	mov r1, #1
	bl sub_080BEA28
_080A22CC:
	ldr r1, _080A2360  @ =gRam
	ldr r0, _080A2364  @ =gUnknown_0816909B
	ldrb r2, [r0]
	ldr r3, _080A2368  @ =0x000016EB
	add r0, r1, r3
	mov r3, #0
	strb r2, [r0]
	ldr r2, _080A236C  @ =0x000016D4
	add r0, r1, r2
	strb r3, [r0]
	add r2, r2, #181
	add r0, r1, r2
	strb r3, [r0]
	ldr r3, _080A2370  @ =0x0000178A
	add r1, r1, r3
	mov r0, #1
	strb r0, [r1]
_080A22EE:
	bl sub_080A38AC
	ldr r5, _080A2360  @ =gRam
	ldr r0, _080A2374  @ =0x00001727
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	mov r6, #0
	strb r0, [r2]
	ldr r1, _080A2368  @ =0x000016EB
	add r4, r5, r1
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080A235A
	ldr r2, _080A2378  @ =0x00001789
	add r3, r5, r2
	ldrb r1, [r3]
	add r1, r1, #1
	strb r1, [r3]
	ldr r2, _080A2364  @ =gUnknown_0816909B
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r4]
	lsl r1, r1, #24
	lsr r1, r1, #24
	cmp r1, #3
	bne _080A235A
	ldr r1, _080A237C  @ =0x00001719
	add r0, r5, r1
	strb r6, [r0]
	strb r6, [r3]
	strb r6, [r4]
	mov r2, #191
	lsl r2, r2, #5
	add r0, r5, r2
	strb r6, [r0]
	ldr r3, _080A2370  @ =0x0000178A
	add r2, r5, r3
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
_080A234C:
	ldr r0, _080A2360  @ =gRam
	ldr r1, _080A2380  @ =0x000016E8
	add r0, r0, r1
	ldrb r2, [r0]
	mov r1, #191
	and r1, r1, r2
	strb r1, [r0]
_080A235A:
	pop {r4-r6}
	pop {r0}
	bx r0
_080A2360:
	.4byte gRam
_080A2364:
	.4byte gUnknown_0816909B
_080A2368:
	.4byte 0x000016EB
_080A236C:
	.4byte 0x000016D4
_080A2370:
	.4byte 0x0000178A
_080A2374:
	.4byte 0x00001727
_080A2378:
	.4byte 0x00001789
_080A237C:
	.4byte 0x00001719
_080A2380:
	.4byte 0x000016E8
	THUMB_FUNC_END sub_080A2228

