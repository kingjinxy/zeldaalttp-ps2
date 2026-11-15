	THUMB_FUNC_START sub_080D21AC
sub_080D21AC: @ 0x080D21AC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080D2250  @ =gRam
	ldr r1, _080D2254  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #3
	beq _080D21DC
	add r0, r4, #0
	bl sub_080D29E4
	ldr r3, _080D2258  @ =0x00000F82
	add r2, r5, r3
	add r2, r4, r2
	ldr r1, _080D225C  @ =0x00000961
	add r0, r5, r1
	ldr r3, _080D2260  @ =0x00000965
	add r1, r5, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	strb r0, [r2]
_080D21DC:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D2248
	ldr r1, _080D2258  @ =0x00000F82
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D221C
	ldr r2, _080D2264  @ =0x00000F72
	add r0, r5, r2
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080D221C
	ldr r0, _080D2268  @ =0x00000A3C
	add r3, r5, r0
	ldrh r1, [r3]
	ldr r0, _080D226C  @ =0x0000FFFF
	cmp r1, r0
	bne _080D221C
	ldr r0, _080D2270  @ =0x00000A3E
	add r1, r5, r0
	mov r0, #7
	strb r0, [r1]
	mov r0, #11
	strb r0, [r2]
	ldr r0, _080D2274  @ =0x0000FFF2
	strh r0, [r3]
_080D221C:
	ldr r1, _080D2250  @ =gRam
	ldr r2, _080D2278  @ =0x00000F92
	add r3, r1, r2
	add r3, r4, r3
	ldr r2, _080D227C  @ =0x00000996
	add r0, r1, r2
	ldrb r0, [r0]
	lsr r0, r0, #5
	mov r2, #1
	and r0, r0, r2
	strb r0, [r3]
	ldr r2, _080D2280  @ =gUnknown_08174C0C
	ldr r3, _080D2254  @ =0x00000F52
	add r1, r1, r3
	add r1, r4, r1
	ldrb r0, [r1]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080D2248:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D2250:
	.4byte gRam
_080D2254:
	.4byte 0x00000F52
_080D2258:
	.4byte 0x00000F82
_080D225C:
	.4byte 0x00000961
_080D2260:
	.4byte 0x00000965
_080D2264:
	.4byte 0x00000F72
_080D2268:
	.4byte 0x00000A3C
_080D226C:
	.4byte 0x0000FFFF
_080D2270:
	.4byte 0x00000A3E
_080D2274:
	.4byte 0x0000FFF2
_080D2278:
	.4byte 0x00000F92
_080D227C:
	.4byte 0x00000996
_080D2280:
	.4byte gUnknown_08174C0C
	THUMB_FUNC_END sub_080D21AC

