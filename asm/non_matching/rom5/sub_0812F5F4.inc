	THUMB_FUNC_START sub_0812F5F4
sub_0812F5F4: @ 0x0812F5F4
	push {r4,r5,lr}
	ldr r5, _0812F654  @ =gRam
	ldr r1, _0812F658  @ =0x000009C6
	add r0, r5, r1
	ldrh r0, [r0]
	mov r1, #191
	and r1, r1, r0
	cmp r1, #3
	beq _0812F60E
	cmp r1, #5
	beq _0812F60E
	cmp r1, #7
	bne _0812F670
_0812F60E:
	ldr r4, _0812F65C  @ =gUnknown_0822B150
	mov r1, #176
	lsl r1, r1, #1
	add r0, r4, r1
	ldr r0, [r0]
	ldr r1, _0812F660  @ =gUnknown_02032000
	bl LZ77UnCompWram
	ldr r0, _0812F660  @ =gUnknown_02032000
	ldr r1, _0812F664  @ =gUnknown_02009A00
	mov r2, #128
	lsl r2, r2, #2
	bl CpuFastSet
	mov r1, #178
	lsl r1, r1, #1
	add r0, r4, r1
	ldr r0, [r0]
	ldr r1, _0812F660  @ =gUnknown_02032000
	bl LZ77UnCompWram
	ldr r0, _0812F660  @ =gUnknown_02032000
	ldr r1, _0812F668  @ =gUnknown_0200A200
	mov r2, #128
	lsl r2, r2, #1
	bl CpuFastSet
	ldr r0, _0812F654  @ =gRam
	ldr r1, _0812F66C  @ =0x00000A3A
	add r0, r0, r1
	mov r1, #224
	lsl r1, r1, #6
	strh r1, [r0]
	b _0812F6B0
	.byte 0x00
	.byte 0x00
_0812F654:
	.4byte gRam
_0812F658:
	.4byte 0x000009C6
_0812F65C:
	.4byte gUnknown_0822B150
_0812F660:
	.4byte gUnknown_02032000
_0812F664:
	.4byte gUnknown_02009A00
_0812F668:
	.4byte gUnknown_0200A200
_0812F66C:
	.4byte 0x00000A3A
_0812F670:
	ldr r4, _0812F6B8  @ =gUnknown_0822B150
	mov r1, #180
	lsl r1, r1, #1
	add r0, r4, r1
	ldr r0, [r0]
	ldr r1, _0812F6BC  @ =gUnknown_02032000
	bl LZ77UnCompWram
	ldr r0, _0812F6BC  @ =gUnknown_02032000
	ldr r1, _0812F6C0  @ =gUnknown_02009A00
	mov r2, #128
	lsl r2, r2, #2
	bl CpuFastSet
	mov r1, #182
	lsl r1, r1, #1
	add r0, r4, r1
	ldr r0, [r0]
	ldr r1, _0812F6BC  @ =gUnknown_02032000
	bl LZ77UnCompWram
	ldr r0, _0812F6BC  @ =gUnknown_02032000
	ldr r1, _0812F6C4  @ =gUnknown_0200A200
	mov r2, #128
	lsl r2, r2, #1
	bl CpuFastSet
	ldr r0, _0812F6C8  @ =0x00000A3A
	add r1, r5, r0
	mov r0, #224
	lsl r0, r0, #6
	strh r0, [r1]
_0812F6B0:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812F6B8:
	.4byte gUnknown_0822B150
_0812F6BC:
	.4byte gUnknown_02032000
_0812F6C0:
	.4byte gUnknown_02009A00
_0812F6C4:
	.4byte gUnknown_0200A200
_0812F6C8:
	.4byte 0x00000A3A
	THUMB_FUNC_END sub_0812F5F4

