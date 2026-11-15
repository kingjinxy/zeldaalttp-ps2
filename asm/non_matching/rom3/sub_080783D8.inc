	THUMB_FUNC_START sub_080783D8
sub_080783D8: @ 0x080783D8
	push {r4,lr}
	mov r1, #0
	ldr r3, _08078418  @ =gUnknown_0814DB24
	ldr r0, _0807841C  @ =gRam
	ldr r2, _08078420  @ =0x000009DA
	add r0, r0, r2
	ldrh r0, [r0]
	ldrh r2, [r3]
	cmp r0, r2
	beq _080783FA
	add r2, r0, #0
	add r0, r3, #0
_080783F0:
	add r0, r0, #52
	add r1, r1, #1
	ldrh r3, [r0]
	cmp r2, r3
	bne _080783F0
_080783FA:
	add r1, r1, #1
	add r0, r1, #0
	bl sub_080764F8
	ldr r3, _0807841C  @ =gRam
	ldr r0, _08078420  @ =0x000009DA
	add r2, r3, r0
	ldrh r1, [r2]
	mov r0, #192
	lsl r0, r0, #1
	cmp r1, r0
	bne _08078424
	mov r1, #0
	b _08078428
	.byte 0x00
	.byte 0x00
_08078418:
	.4byte gUnknown_0814DB24
_0807841C:
	.4byte gRam
_08078420:
	.4byte 0x000009DA
_08078424:
	mov r1, #130
	lsl r1, r1, #1
_08078428:
	strh r1, [r2]
	ldr r2, _080784CC  @ =0x00001670
	add r0, r3, r2
	strh r1, [r0]
	ldr r4, _080784D0  @ =gRam
	ldr r3, _080784D4  @ =0x000009C6
	add r0, r4, r3
	ldrh r1, [r0]
	ldr r2, _080784D8  @ =gUnknown_02002DC0
	add r0, r1, r2
	ldrb r0, [r0]
	ldr r2, _080784DC  @ =gUnknown_0814C8E8
	add r1, r1, r2
	ldrb r1, [r1]
	bl sub_0813084C
	bl sub_08130A24
	ldr r3, _080784E0  @ =0x000009E3
	add r1, r4, r3
	mov r0, #0
	strb r0, [r1]
	ldr r1, _080784E4  @ =0x000009E4
	add r0, r4, r1
	mov r1, #2
	strb r1, [r0]
	mov r2, #158
	lsl r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
	sub r3, r3, #2
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080784E8  @ =0x000016F7
	add r0, r4, r1
	mov r1, #128
	strb r1, [r0]
	ldr r2, _080784EC  @ =0x000016F6
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _080784F0  @ =0x000016F4
	add r0, r4, r3
	mov r1, #15
	strb r1, [r0]
	sub r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	sub r3, r3, #44
	add r1, r4, r3
	mov r0, #255
	strb r0, [r1]
	ldr r0, _080784F4  @ =0x000016CF
	add r1, r4, r0
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
	bl sub_0809E2CC
	bl sub_0806A0C0
	ldr r1, _080784F8  @ =0x00000C96
	add r2, r4, r1
	ldrh r1, [r2]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	mov r1, #228
	orr r0, r0, r1
	strh r0, [r2]
	ldr r2, _080784FC  @ =0x00000C92
	add r1, r4, r2
	ldrb r0, [r1]
	strh r0, [r1]
	ldr r3, _08078500  @ =0x00000A3E
	add r4, r4, r3
	mov r0, #1
	neg r0, r0
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080784CC:
	.4byte 0x00001670
_080784D0:
	.4byte gRam
_080784D4:
	.4byte 0x000009C6
_080784D8:
	.4byte gUnknown_02002DC0
_080784DC:
	.4byte gUnknown_0814C8E8
_080784E0:
	.4byte 0x000009E3
_080784E4:
	.4byte 0x000009E4
_080784E8:
	.4byte 0x000016F7
_080784EC:
	.4byte 0x000016F6
_080784F0:
	.4byte 0x000016F4
_080784F4:
	.4byte 0x000016CF
_080784F8:
	.4byte 0x00000C96
_080784FC:
	.4byte 0x00000C92
_08078500:
	.4byte 0x00000A3E
	THUMB_FUNC_END sub_080783D8

