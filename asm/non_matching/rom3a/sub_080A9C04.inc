	THUMB_FUNC_START sub_080A9C04
sub_080A9C04: @ 0x080A9C04
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r0, _080A9D98  @ =gRam
	mov r8, r0
	ldr r7, _080A9D9C  @ =0x00000AB2
	add r7, r7, r8
	ldrh r2, [r7]
	ldrb r0, [r7]
	cmp r0, #255
	bne _080A9C1E
	b _080A9D8A
_080A9C1E:
	ldr r1, _080A9DA0  @ =gBigKeys
	ldr r3, _080A9DA4  @ =gUnknown_081676B2
	mov r9, r3
	lsr r2, r2, #1
	lsl r0, r2, #1
	add r0, r0, r9
	ldrh r1, [r1]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _080A9CAA
	ldr r1, _080A9DA8  @ =gUnknown_0816BE5C
	lsl r0, r2, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	ldr r1, _080A9DAC  @ =0x00000964
	add r1, r1, r8
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r0, _080A9DB0  @ =gUnknown_0816BB10
	ldr r6, _080A9DB4  @ =gUnknown_02000400
	ldrh r4, [r6]
	mov r2, #0
	ldrsh r1, [r1, r2]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r4, #1
	ldr r0, _080A9DB8  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r0, _080A9DBC  @ =0xFFFF96B8
	strh r0, [r3]
	ldr r3, _080A9DC0  @ =gUnknown_02000404
	add r0, r2, r3
	mov r5, #2
	strh r5, [r0]
	ldr r0, _080A9DC4  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A9DC8  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A9DCC  @ =gUnknown_0200040A
	add r3, r2, r0
	ldr r0, _080A9DD0  @ =0xFFFF96F8
	strh r0, [r3]
	ldr r3, _080A9DD4  @ =gUnknown_0200040C
	add r0, r2, r3
	strh r5, [r0]
	ldr r0, _080A9DD8  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A9DDC  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A9DE0  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A9DE4  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #8
	strh r4, [r6]
_080A9CAA:
	ldr r1, _080A9DE8  @ =gDungeonMaps
	ldrh r0, [r7]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r1, [r1]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _080A9D1A
	ldr r1, _080A9DAC  @ =0x00000964
	add r1, r1, r8
	mov r0, #1
	strh r0, [r1]
	ldr r3, _080A9DEC  @ =gUnknown_0816BB28
	ldr r6, _080A9DB4  @ =gUnknown_02000400
	ldrh r4, [r6]
	lsl r1, r4, #1
	ldr r0, _080A9DB8  @ =gUnknown_02000402
	add r2, r1, r0
	ldr r0, _080A9DF0  @ =0xFFFF96AC
	strh r0, [r2]
	ldr r2, _080A9DC0  @ =gUnknown_02000404
	add r0, r1, r2
	mov r5, #2
	strh r5, [r0]
	ldr r0, _080A9DC4  @ =gUnknown_02000406
	add r2, r1, r0
	ldrh r0, [r3, #8]
	strh r0, [r2]
	ldr r0, _080A9DC8  @ =gUnknown_02000408
	add r2, r1, r0
	ldrh r0, [r3, #10]
	strh r0, [r2]
	ldr r0, _080A9DCC  @ =gUnknown_0200040A
	add r2, r1, r0
	ldr r0, _080A9DF4  @ =0xFFFF96EC
	strh r0, [r2]
	ldr r2, _080A9DD4  @ =gUnknown_0200040C
	add r0, r1, r2
	strh r5, [r0]
	ldr r0, _080A9DD8  @ =gUnknown_0200040E
	add r2, r1, r0
	ldrh r0, [r3, #12]
	strh r0, [r2]
	ldr r0, _080A9DDC  @ =gUnknown_02000410
	add r2, r1, r0
	ldrh r0, [r3, #14]
	strh r0, [r2]
	ldr r2, _080A9DE0  @ =gUnknown_02000412
	add r1, r1, r2
	ldr r3, _080A9DE4  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r1]
	add r4, r4, #8
	strh r4, [r6]
_080A9D1A:
	ldr r1, _080A9DF8  @ =gCompasses
	ldrh r0, [r7]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r1, [r1]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _080A9D8A
	ldr r1, _080A9DAC  @ =0x00000964
	add r1, r1, r8
	mov r0, #1
	strh r0, [r1]
	ldr r3, _080A9DFC  @ =gUnknown_0816BB00
	ldr r6, _080A9DB4  @ =gUnknown_02000400
	ldrh r4, [r6]
	lsl r1, r4, #1
	ldr r0, _080A9DB8  @ =gUnknown_02000402
	add r2, r1, r0
	ldr r0, _080A9E00  @ =0xFFFF96B2
	strh r0, [r2]
	ldr r2, _080A9DC0  @ =gUnknown_02000404
	add r0, r1, r2
	mov r5, #2
	strh r5, [r0]
	ldr r0, _080A9DC4  @ =gUnknown_02000406
	add r2, r1, r0
	ldrh r0, [r3, #8]
	strh r0, [r2]
	ldr r0, _080A9DC8  @ =gUnknown_02000408
	add r2, r1, r0
	ldrh r0, [r3, #10]
	strh r0, [r2]
	ldr r0, _080A9DCC  @ =gUnknown_0200040A
	add r2, r1, r0
	ldr r0, _080A9E04  @ =0xFFFF96F2
	strh r0, [r2]
	ldr r2, _080A9DD4  @ =gUnknown_0200040C
	add r0, r1, r2
	strh r5, [r0]
	ldr r0, _080A9DD8  @ =gUnknown_0200040E
	add r2, r1, r0
	ldrh r0, [r3, #12]
	strh r0, [r2]
	ldr r0, _080A9DDC  @ =gUnknown_02000410
	add r2, r1, r0
	ldrh r0, [r3, #14]
	strh r0, [r2]
	ldr r2, _080A9DE0  @ =gUnknown_02000412
	add r1, r1, r2
	ldr r3, _080A9DE4  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r1]
	add r4, r4, #8
	strh r4, [r6]
_080A9D8A:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A9D98:
	.4byte gRam
_080A9D9C:
	.4byte 0x00000AB2
_080A9DA0:
	.4byte gBigKeys
_080A9DA4:
	.4byte gUnknown_081676B2
_080A9DA8:
	.4byte gUnknown_0816BE5C
_080A9DAC:
	.4byte 0x00000964
_080A9DB0:
	.4byte gUnknown_0816BB10
_080A9DB4:
	.4byte gUnknown_02000400
_080A9DB8:
	.4byte gUnknown_02000402
_080A9DBC:
	.4byte 0xFFFF96B8
_080A9DC0:
	.4byte gUnknown_02000404
_080A9DC4:
	.4byte gUnknown_02000406
_080A9DC8:
	.4byte gUnknown_02000408
_080A9DCC:
	.4byte gUnknown_0200040A
_080A9DD0:
	.4byte 0xFFFF96F8
_080A9DD4:
	.4byte gUnknown_0200040C
_080A9DD8:
	.4byte gUnknown_0200040E
_080A9DDC:
	.4byte gUnknown_02000410
_080A9DE0:
	.4byte gUnknown_02000412
_080A9DE4:
	.4byte 0x0000FFFF
_080A9DE8:
	.4byte gDungeonMaps
_080A9DEC:
	.4byte gUnknown_0816BB28
_080A9DF0:
	.4byte 0xFFFF96AC
_080A9DF4:
	.4byte 0xFFFF96EC
_080A9DF8:
	.4byte gCompasses
_080A9DFC:
	.4byte gUnknown_0816BB00
_080A9E00:
	.4byte 0xFFFF96B2
_080A9E04:
	.4byte 0xFFFF96F2
	THUMB_FUNC_END sub_080A9C04

