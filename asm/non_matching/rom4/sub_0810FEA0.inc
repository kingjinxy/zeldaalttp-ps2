	THUMB_FUNC_START sub_0810FEA0
sub_0810FEA0: @ 0x0810FEA0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810FEE8
	ldr r2, _0810FF7C  @ =gRam
	ldr r0, _0810FF80  @ =0x00000FB2
	add r4, r2, r0
	add r4, r5, r4
	ldrb r0, [r4]
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r4]
	ldr r0, _0810FF84  @ =0x00000F22
	add r1, r2, r0
	add r1, r5, r1
	ldr r3, _0810FF88  @ =gUnknown_0817D3A4
	ldrb r0, [r4]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _0810FF8C  @ =0x00000F12
	add r2, r2, r1
	add r2, r5, r2
	ldr r1, _0810FF90  @ =gUnknown_0817D3A6
	ldrb r0, [r4]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
_0810FEE8:
	ldr r4, _0810FF7C  @ =gRam
	ldr r1, _0810FF94  @ =0x00000EE2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r2, #31
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #4
	bne _0810FF36
	ldr r1, _0810FF98  @ =0x00000ED2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #27
	bne _0810FF36
	bl GetRandomInt
	mov r2, #3
	and r2, r2, r0
	cmp r2, #0
	bne _0810FF36
	ldr r1, _0810FF9C  @ =0x00000FC2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #111
	strb r1, [r0]
	ldr r0, _0810FFA0  @ =0x00000F52
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _0810FFA4  @ =0x00000F62
	add r0, r4, r1
	add r0, r5, r0
	strb r2, [r0]
_0810FF36:
	ldr r3, _0810FF7C  @ =gRam
	ldr r1, _0810FFA8  @ =0x00001052
	add r0, r3, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r2, #4
	and r2, r2, r1
	ldr r1, _0810FF80  @ =0x00000FB2
	add r0, r3, r1
	add r0, r5, r0
	ldrb r0, [r0]
	orr r2, r2, r0
	ldr r0, _0810FFAC  @ =0x00000F92
	add r1, r3, r0
	add r1, r5, r1
	ldr r0, _0810FFB0  @ =gUnknown_0817D3B2
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _0810FFB4  @ =0x00001122
	add r3, r3, r1
	add r3, r5, r3
	ldrb r1, [r3]
	mov r0, #191
	and r0, r0, r1
	ldr r1, _0810FFB8  @ =gUnknown_0817D3BA
	add r2, r2, r1
	ldrb r1, [r2]
	orr r0, r0, r1
	strb r0, [r3]
	pop {r4,r5}
	pop {r0}
	bx r0
_0810FF7C:
	.4byte gRam
_0810FF80:
	.4byte 0x00000FB2
_0810FF84:
	.4byte 0x00000F22
_0810FF88:
	.4byte gUnknown_0817D3A4
_0810FF8C:
	.4byte 0x00000F12
_0810FF90:
	.4byte gUnknown_0817D3A6
_0810FF94:
	.4byte 0x00000EE2
_0810FF98:
	.4byte 0x00000ED2
_0810FF9C:
	.4byte 0x00000FC2
_0810FFA0:
	.4byte 0x00000F52
_0810FFA4:
	.4byte 0x00000F62
_0810FFA8:
	.4byte 0x00001052
_0810FFAC:
	.4byte 0x00000F92
_0810FFB0:
	.4byte gUnknown_0817D3B2
_0810FFB4:
	.4byte 0x00001122
_0810FFB8:
	.4byte gUnknown_0817D3BA
	THUMB_FUNC_END sub_0810FEA0

