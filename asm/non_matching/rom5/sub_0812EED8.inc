	THUMB_FUNC_START sub_0812EED8
sub_0812EED8: @ 0x0812EED8
	push {r4,r5,lr}
	ldr r0, _0812EF5C  @ =gUnknown_0822B324
	ldr r0, [r0]
	ldr r4, _0812EF60  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812EF64  @ =0x06010000
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812EF68  @ =gUnknown_02032200
	ldr r1, _0812EF6C  @ =0x06010400
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812EF70  @ =gUnknown_02032400
	ldr r1, _0812EF74  @ =0x06010800
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812EF78  @ =gUnknown_02032600
	ldr r1, _0812EF7C  @ =0x06010C00
	mov r2, #128
	bl CpuFastSet
	ldr r5, _0812EF80  @ =gUnknown_0822B9E4
	ldr r4, _0812EF84  @ =gRam
	ldr r0, _0812EF88  @ =0x0000098E
	add r4, r4, r0
	mov r1, #0
	ldrsb r1, [r4, r1]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r5
	ldr r0, [r0]
	ldr r1, _0812EF8C  @ =0x06004000
	bl LZ77UnCompVram
	mov r1, #0
	ldrsb r1, [r4, r1]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	add r1, r5, #4
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, _0812EF90  @ =0x06005000
	bl LZ77UnCompVram
	mov r1, #0
	ldrsb r1, [r4, r1]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	add r5, r5, #8
	add r0, r0, r5
	ldr r0, [r0]
	ldr r1, _0812EF94  @ =0x06006000
	bl LZ77UnCompVram
	pop {r4,r5}
	pop {r0}
	bx r0
_0812EF5C:
	.4byte gUnknown_0822B324
_0812EF60:
	.4byte gUnknown_02032000
_0812EF64:
	.4byte 0x06010000
_0812EF68:
	.4byte gUnknown_02032200
_0812EF6C:
	.4byte 0x06010400
_0812EF70:
	.4byte gUnknown_02032400
_0812EF74:
	.4byte 0x06010800
_0812EF78:
	.4byte gUnknown_02032600
_0812EF7C:
	.4byte 0x06010C00
_0812EF80:
	.4byte gUnknown_0822B9E4
_0812EF84:
	.4byte gRam
_0812EF88:
	.4byte 0x0000098E
_0812EF8C:
	.4byte 0x06004000
_0812EF90:
	.4byte 0x06005000
_0812EF94:
	.4byte 0x06006000
	THUMB_FUNC_END sub_0812EED8

