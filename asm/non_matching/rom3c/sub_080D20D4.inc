	THUMB_FUNC_START sub_080D20D4
sub_080D20D4: @ 0x080D20D4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080D2110  @ =gRam
	ldr r0, _080D2114  @ =0x00001172
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r3, _080D2118  @ =0x00001052
	add r1, r2, r3
	add r1, r4, r1
	ldr r3, _080D211C  @ =0x0000165C
	add r0, r2, r3
	ldrh r0, [r0]
	lsr r0, r0, #6
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080D2134
	ldr r0, _080D2120  @ =gFlute
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080D2124
	add r0, r4, #0
	bl sub_080D26E8
	b _080D2196
_080D2110:
	.4byte gRam
_080D2114:
	.4byte 0x00001172
_080D2118:
	.4byte 0x00001052
_080D211C:
	.4byte 0x0000165C
_080D2120:
	.4byte gFlute
_080D2124:
	ldr r3, _080D2130  @ =0x00000FA2
	add r0, r2, r3
	add r0, r4, r0
	strb r1, [r0]
	b _080D2196
	.byte 0x00
	.byte 0x00
_080D2130:
	.4byte 0x00000FA2
_080D2134:
	mov r3, #0
	ldr r1, _080D215C  @ =0x00001662
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _080D216E
	ldr r0, _080D2160  @ =gFlute
	ldrb r0, [r0]
	cmp r0, #1
	bls _080D216A
	cmp r0, #2
	bne _080D2168
	ldr r1, _080D2164  @ =0x00000F92
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	b _080D216A
_080D215C:
	.4byte 0x00001662
_080D2160:
	.4byte gFlute
_080D2164:
	.4byte 0x00000F92
_080D2168:
	mov r3, #1
_080D216A:
	cmp r3, #0
	beq _080D2182
_080D216E:
	ldr r3, _080D219C  @ =0x00000F92
	add r0, r2, r3
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
	ldr r1, _080D21A0  @ =0x00000F52
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #5
	strb r1, [r0]
_080D2182:
	add r0, r4, #0
	bl sub_080C35A4
	ldr r1, _080D21A4  @ =gRam
	ldr r3, _080D21A8  @ =0x00000ED2
	add r1, r1, r3
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #8
	strb r0, [r1]
_080D2196:
	pop {r4}
	pop {r0}
	bx r0
_080D219C:
	.4byte 0x00000F92
_080D21A0:
	.4byte 0x00000F52
_080D21A4:
	.4byte gRam
_080D21A8:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_080D20D4

