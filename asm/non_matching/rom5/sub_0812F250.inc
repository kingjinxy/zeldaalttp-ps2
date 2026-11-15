	THUMB_FUNC_START sub_0812F250
sub_0812F250: @ 0x0812F250
	push {r4,r5,lr}
	mov r1, #3
	ldr r2, _0812F28C  @ =gSword
	ldrb r0, [r2]
	cmp r0, #255
	beq _0812F25E
	add r1, r0, #0
_0812F25E:
	ldr r0, _0812F290  @ =gUnknown_0822BA48
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r4, [r1]
	ldr r0, _0812F294  @ =gUnknown_082542E8
	ldr r5, _0812F298  @ =gUnknown_02032000
	add r1, r5, #0
	bl LZ77UnCompWram
	cmp r4, #0
	bne _0812F2A8
	ldr r1, _0812F29C  @ =gUnknown_02008380
	add r0, r5, #0
	mov r2, #96
	bl CpuFastSet
	ldr r0, _0812F2A0  @ =gUnknown_02032200
	ldr r1, _0812F2A4  @ =gUnknown_02008500
	mov r2, #96
	bl CpuFastSet
	b _0812F2D8
	.byte 0x00
	.byte 0x00
_0812F28C:
	.4byte gSword
_0812F290:
	.4byte gUnknown_0822BA48
_0812F294:
	.4byte gUnknown_082542E8
_0812F298:
	.4byte gUnknown_02032000
_0812F29C:
	.4byte gUnknown_02008380
_0812F2A0:
	.4byte gUnknown_02032200
_0812F2A4:
	.4byte gUnknown_02008500
_0812F2A8:
	lsl r4, r4, #1
	ldr r1, _0812F2E0  @ =gUnknown_02032000
	add r0, r4, r1
	ldr r1, _0812F2E4  @ =gUnknown_02008380
	mov r2, #32
	bl CpuFastSet
	ldr r0, _0812F2E8  @ =gUnknown_02032400
	ldr r1, _0812F2EC  @ =gUnknown_02008400
	mov r2, #64
	bl CpuFastSet
	ldr r0, _0812F2F0  @ =gUnknown_02032200
	add r4, r4, r0
	ldr r1, _0812F2F4  @ =gUnknown_02008500
	add r0, r4, #0
	mov r2, #32
	bl CpuFastSet
	ldr r0, _0812F2F8  @ =gUnknown_02032600
	ldr r1, _0812F2FC  @ =gUnknown_02008580
	mov r2, #64
	bl CpuFastSet
_0812F2D8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812F2E0:
	.4byte gUnknown_02032000
_0812F2E4:
	.4byte gUnknown_02008380
_0812F2E8:
	.4byte gUnknown_02032400
_0812F2EC:
	.4byte gUnknown_02008400
_0812F2F0:
	.4byte gUnknown_02032200
_0812F2F4:
	.4byte gUnknown_02008500
_0812F2F8:
	.4byte gUnknown_02032600
_0812F2FC:
	.4byte gUnknown_02008580
	THUMB_FUNC_END sub_0812F250

