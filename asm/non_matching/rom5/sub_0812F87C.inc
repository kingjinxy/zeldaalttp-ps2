	THUMB_FUNC_START sub_0812F87C
sub_0812F87C: @ 0x0812F87C
	push {r4-r6,lr}
	ldr r6, _0812F91C  @ =gUnknown_0822B624
	ldr r0, _0812F920  @ =gRam
	ldr r1, _0812F924  @ =0x00000C9B
	add r5, r0, r1
	ldrb r0, [r5]
	lsl r0, r0, #2
	add r1, r6, #2
	add r2, r0, r1
	ldrb r0, [r2]
	cmp r0, #255
	beq _0812F8CC
	ldr r1, _0812F928  @ =gUnknown_0822B324
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r4, _0812F92C  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812F930  @ =0x06013000
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F934  @ =gUnknown_02032200
	ldr r1, _0812F938  @ =0x06013400
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F93C  @ =gUnknown_02032400
	ldr r1, _0812F940  @ =0x06013800
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F944  @ =gUnknown_02032600
	ldr r1, _0812F948  @ =0x06013C00
	mov r2, #128
	bl CpuFastSet
_0812F8CC:
	ldrb r0, [r5]
	lsl r0, r0, #2
	add r1, r6, #3
	add r2, r0, r1
	ldrb r0, [r2]
	cmp r0, #255
	beq _0812F912
	ldr r1, _0812F928  @ =gUnknown_0822B324
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r4, _0812F92C  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812F94C  @ =0x06013200
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F934  @ =gUnknown_02032200
	ldr r1, _0812F950  @ =0x06013600
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F93C  @ =gUnknown_02032400
	ldr r1, _0812F954  @ =0x06013A00
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F944  @ =gUnknown_02032600
	ldr r1, _0812F958  @ =0x06013E00
	mov r2, #128
	bl CpuFastSet
_0812F912:
	bl sub_08098B9C
	pop {r4-r6}
	pop {r0}
	bx r0
_0812F91C:
	.4byte gUnknown_0822B624
_0812F920:
	.4byte gRam
_0812F924:
	.4byte 0x00000C9B
_0812F928:
	.4byte gUnknown_0822B324
_0812F92C:
	.4byte gUnknown_02032000
_0812F930:
	.4byte 0x06013000
_0812F934:
	.4byte gUnknown_02032200
_0812F938:
	.4byte 0x06013400
_0812F93C:
	.4byte gUnknown_02032400
_0812F940:
	.4byte 0x06013800
_0812F944:
	.4byte gUnknown_02032600
_0812F948:
	.4byte 0x06013C00
_0812F94C:
	.4byte 0x06013200
_0812F950:
	.4byte 0x06013600
_0812F954:
	.4byte 0x06013A00
_0812F958:
	.4byte 0x06013E00
	THUMB_FUNC_END sub_0812F87C

