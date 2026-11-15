	THUMB_FUNC_START sub_0812F7A0
sub_0812F7A0: @ 0x0812F7A0
	push {r4-r6,lr}
	ldr r6, _0812F83C  @ =gUnknown_0822B624
	ldr r0, _0812F840  @ =gRam
	ldr r1, _0812F844  @ =0x00000C9B
	add r5, r0, r1
	ldrb r0, [r5]
	lsl r0, r0, #2
	add r2, r0, r6
	ldrb r0, [r2]
	cmp r0, #255
	beq _0812F7EE
	ldr r1, _0812F848  @ =gUnknown_0822B324
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r4, _0812F84C  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812F850  @ =0x06012000
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F854  @ =gUnknown_02032200
	ldr r1, _0812F858  @ =0x06012400
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F85C  @ =gUnknown_02032400
	ldr r1, _0812F860  @ =0x06012800
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F864  @ =gUnknown_02032600
	ldr r1, _0812F868  @ =0x06012C00
	mov r2, #128
	bl CpuFastSet
_0812F7EE:
	ldrb r0, [r5]
	lsl r0, r0, #2
	add r1, r6, #1
	add r2, r0, r1
	ldrb r0, [r2]
	cmp r0, #255
	beq _0812F834
	ldr r1, _0812F848  @ =gUnknown_0822B324
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r4, _0812F84C  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812F86C  @ =0x06012200
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F854  @ =gUnknown_02032200
	ldr r1, _0812F870  @ =0x06012600
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F85C  @ =gUnknown_02032400
	ldr r1, _0812F874  @ =0x06012A00
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F864  @ =gUnknown_02032600
	ldr r1, _0812F878  @ =0x06012E00
	mov r2, #128
	bl CpuFastSet
_0812F834:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812F83C:
	.4byte gUnknown_0822B624
_0812F840:
	.4byte gRam
_0812F844:
	.4byte 0x00000C9B
_0812F848:
	.4byte gUnknown_0822B324
_0812F84C:
	.4byte gUnknown_02032000
_0812F850:
	.4byte 0x06012000
_0812F854:
	.4byte gUnknown_02032200
_0812F858:
	.4byte 0x06012400
_0812F85C:
	.4byte gUnknown_02032400
_0812F860:
	.4byte 0x06012800
_0812F864:
	.4byte gUnknown_02032600
_0812F868:
	.4byte 0x06012C00
_0812F86C:
	.4byte 0x06012200
_0812F870:
	.4byte 0x06012600
_0812F874:
	.4byte 0x06012A00
_0812F878:
	.4byte 0x06012E00
	THUMB_FUNC_END sub_0812F7A0

