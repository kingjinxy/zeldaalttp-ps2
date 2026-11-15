	THUMB_FUNC_START sub_0810BEB0
sub_0810BEB0: @ 0x0810BEB0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810BF90  @ =gRam
	ldr r0, _0810BF94  @ =0x00000D94
	add r1, r5, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #48
	orr r0, r0, r2
	strb r0, [r1]
	add r0, r4, #0
	bl sub_0810C7A4
	ldr r1, _0810BF98  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #9
	bne _0810BEE4
	ldr r2, _0810BF9C  @ =0x00001142
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #95
	bhi _0810BEF2
_0810BEE4:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810BEF2
	b _0810BFFA
_0810BEF2:
	add r0, r4, #0
	bl sub_0810CE74
	ldr r6, _0810BF90  @ =gRam
	ldr r3, _0810BFA0  @ =0x00000D1A
	add r1, r6, r3
	mov r0, #1
	strb r0, [r1]
	ldr r1, _0810BFA4  @ =0x000010C2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #2
	bne _0810BF22
	add r0, r4, #0
	bl sub_0810C958
	ldr r2, _0810BFA8  @ =0x00001032
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
_0810BF22:
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810BFFA
	add r0, r4, #0
	bl sub_080C4F98
	ldr r3, _0810BFAC  @ =0x00001052
	add r0, r6, r3
	add r0, r4, r0
	ldrb r2, [r0]
	add r1, r2, #1
	strb r1, [r0]
	mov r5, #3
	and r5, r5, r2
	cmp r5, #0
	bne _0810BF6A
	ldr r1, _0810BFB0  @ =0x000010A2
	add r0, r6, r1
	add r3, r4, r0
	ldrb r1, [r3]
	add r0, r1, #1
	strb r0, [r3]
	cmp r1, #9
	bne _0810BF5A
	strb r5, [r3]
_0810BF5A:
	ldr r2, _0810BFB4  @ =0x00000F92
	add r1, r6, r2
	add r1, r4, r1
	ldr r2, _0810BFB8  @ =gUnknown_0817CD6C
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_0810BF6A:
	add r0, r4, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r2, r0, #0
	cmp r2, #0
	beq _0810BFE2
	ldr r1, _0810BF90  @ =gRam
	ldr r3, _0810BFBC  @ =0x00000F52
	add r0, r1, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #5
	beq _0810BFC0
	add r0, r4, #0
	bl sub_080C351C
	b _0810BFE2
_0810BF90:
	.4byte gRam
_0810BF94:
	.4byte 0x00000D94
_0810BF98:
	.4byte 0x00000FA2
_0810BF9C:
	.4byte 0x00001142
_0810BFA0:
	.4byte 0x00000D1A
_0810BFA4:
	.4byte 0x000010C2
_0810BFA8:
	.4byte 0x00001032
_0810BFAC:
	.4byte 0x00001052
_0810BFB0:
	.4byte 0x000010A2
_0810BFB4:
	.4byte 0x00000F92
_0810BFB8:
	.4byte gUnknown_0817CD6C
_0810BFBC:
	.4byte 0x00000F52
_0810BFC0:
	mov r0, #3
	and r0, r0, r2
	cmp r0, #0
	bne _0810BFD4
	ldr r0, _0810BFD0  @ =0x00000F12
	add r1, r1, r0
	b _0810BFD8
	.byte 0x00
	.byte 0x00
_0810BFD0:
	.4byte 0x00000F12
_0810BFD4:
	ldr r2, _0810C000  @ =0x00000F22
	add r1, r1, r2
_0810BFD8:
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
_0810BFE2:
	ldr r1, _0810C004  @ =gUnknown_0817CD78
	ldr r0, _0810C008  @ =gRam
	ldr r3, _0810C00C  @ =0x00000F52
	add r0, r0, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_0810BFFA:
	pop {r4-r6}
	pop {r0}
	bx r0
_0810C000:
	.4byte 0x00000F22
_0810C004:
	.4byte gUnknown_0817CD78
_0810C008:
	.4byte gRam
_0810C00C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810BEB0

