	THUMB_FUNC_START sub_0810FDE8
sub_0810FDE8: @ 0x0810FDE8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r4, _0810FE58  @ =gRam
	ldr r0, _0810FE5C  @ =0x00000F52
	add r1, r4, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl GetRandomInt
	ldr r1, _0810FE60  @ =0x00000FB2
	add r2, r4, r1
	add r2, r6, r2
	mov r1, #3
	and r1, r1, r0
	strb r1, [r2]
	ldr r1, _0810FE64  @ =0x00000D84
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #176
	strb r1, [r0]
	ldr r1, _0810FE68  @ =0x00000F22
	add r0, r4, r1
	add r7, r6, r0
	add r5, r2, #0
	ldr r0, _0810FE6C  @ =0x00000F12
	add r4, r4, r0
	add r4, r6, r4
	ldr r1, _0810FE70  @ =gUnknown_0817D3AA
	mov r8, r1
_0810FE2C:
	ldrb r0, [r5]
	add r0, r0, r8
	ldrb r0, [r0]
	strb r0, [r7]
	ldr r1, _0810FE74  @ =gUnknown_0817D3AE
	ldrb r0, [r5]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r4]
	add r0, r6, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810FE78
	ldrb r0, [r5]
	add r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r5]
	b _0810FE2C
	.byte 0x00
	.byte 0x00
_0810FE58:
	.4byte gRam
_0810FE5C:
	.4byte 0x00000F52
_0810FE60:
	.4byte 0x00000FB2
_0810FE64:
	.4byte 0x00000D84
_0810FE68:
	.4byte 0x00000F22
_0810FE6C:
	.4byte 0x00000F12
_0810FE70:
	.4byte gUnknown_0817D3AA
_0810FE74:
	.4byte gUnknown_0817D3AE
_0810FE78:
	ldr r1, _0810FE98  @ =gUnknown_0817D3A4
	ldrb r0, [r5]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r7]
	ldr r1, _0810FE9C  @ =gUnknown_0817D3A6
	ldrb r0, [r5]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r4]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810FE98:
	.4byte gUnknown_0817D3A4
_0810FE9C:
	.4byte gUnknown_0817D3A6
	THUMB_FUNC_END sub_0810FDE8

