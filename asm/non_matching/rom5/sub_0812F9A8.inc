	THUMB_FUNC_START sub_0812F9A8
sub_0812F9A8: @ 0x0812F9A8
	push {r4,r5,lr}
	ldr r1, _0812FA04  @ =gUnknown_0822BB1C
	ldr r0, _0812FA08  @ =gRam
	ldr r2, _0812FA0C  @ =0x00001663
	add r0, r0, r2
	ldrb r2, [r0]
	lsl r0, r2, #1
	add r0, r0, r1
	ldrh r0, [r0]
	lsr r3, r0, #11
	ldr r5, _0812FA10  @ =0x000007FF
	and r5, r5, r0
	mov r0, #100
	cmp r2, #1
	beq _0812F9D4
	mov r0, #101
	cmp r2, #8
	bls _0812F9D4
	mov r0, #89
	cmp r2, #11
	bls _0812F9D4
	mov r0, #88
_0812F9D4:
	ldr r1, _0812FA14  @ =gUnknown_0822B324
	add r0, r3, r0
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r4, _0812FA18  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	add r4, r5, r4
	ldr r1, _0812FA1C  @ =gUnknown_0200ACC0
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812FA20  @ =gUnknown_02032200
	add r0, r5, r1
	ldr r1, _0812FA24  @ =gUnknown_0200AEC0
	mov r2, #128
	bl CpuFastSet
	pop {r4,r5}
	pop {r0}
	bx r0
_0812FA04:
	.4byte gUnknown_0822BB1C
_0812FA08:
	.4byte gRam
_0812FA0C:
	.4byte 0x00001663
_0812FA10:
	.4byte 0x000007FF
_0812FA14:
	.4byte gUnknown_0822B324
_0812FA18:
	.4byte gUnknown_02032000
_0812FA1C:
	.4byte gUnknown_0200ACC0
_0812FA20:
	.4byte gUnknown_02032200
_0812FA24:
	.4byte gUnknown_0200AEC0
	THUMB_FUNC_END sub_0812F9A8

