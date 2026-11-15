	THUMB_FUNC_START sub_0812EF98
sub_0812EF98: @ 0x0812EF98
	push {r4-r6,lr}
	ldr r1, _0812EFC0  @ =gUnknown_0822B624
	ldr r2, _0812EFC4  @ =gRam
	ldr r3, _0812EFC8  @ =0x00000C9B
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldrb r1, [r0]
	cmp r1, #255
	beq _0812F00E
	cmp r1, #45
	bne _0812EFD4
	ldr r1, _0812EFCC  @ =gUnknown_0822B4E0
	ldr r3, _0812EFD0  @ =0x0000098E
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	b _0812EFD8
_0812EFC0:
	.4byte gUnknown_0822B624
_0812EFC4:
	.4byte gRam
_0812EFC8:
	.4byte 0x00000C9B
_0812EFCC:
	.4byte gUnknown_0822B4E0
_0812EFD0:
	.4byte 0x0000098E
_0812EFD4:
	ldr r1, _0812F0F0  @ =gUnknown_0822B324
	ldrb r0, [r0]
_0812EFD8:
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r4, _0812F0F4  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812F0F8  @ =0x06012000
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F0FC  @ =gUnknown_02032200
	ldr r1, _0812F100  @ =0x06012400
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F104  @ =gUnknown_02032400
	ldr r1, _0812F108  @ =0x06012800
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F10C  @ =gUnknown_02032600
	ldr r1, _0812F110  @ =0x06012C00
	mov r2, #128
	bl CpuFastSet
_0812F00E:
	ldr r6, _0812F114  @ =gUnknown_0822B624
	ldr r0, _0812F118  @ =gRam
	ldr r1, _0812F11C  @ =0x00000C9B
	add r5, r0, r1
	ldrb r0, [r5]
	lsl r0, r0, #2
	add r1, r6, #1
	add r2, r0, r1
	ldrb r0, [r2]
	cmp r0, #255
	beq _0812F05C
	ldr r1, _0812F0F0  @ =gUnknown_0822B324
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r4, _0812F0F4  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812F120  @ =0x06012200
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F0FC  @ =gUnknown_02032200
	ldr r1, _0812F124  @ =0x06012600
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F104  @ =gUnknown_02032400
	ldr r1, _0812F128  @ =0x06012A00
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F10C  @ =gUnknown_02032600
	ldr r1, _0812F12C  @ =0x06012E00
	mov r2, #128
	bl CpuFastSet
_0812F05C:
	ldrb r0, [r5]
	lsl r0, r0, #2
	add r1, r6, #2
	add r2, r0, r1
	ldrb r0, [r2]
	cmp r0, #255
	beq _0812F0A2
	ldr r1, _0812F0F0  @ =gUnknown_0822B324
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r4, _0812F0F4  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812F130  @ =0x06013000
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F0FC  @ =gUnknown_02032200
	ldr r1, _0812F134  @ =0x06013400
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F104  @ =gUnknown_02032400
	ldr r1, _0812F138  @ =0x06013800
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F10C  @ =gUnknown_02032600
	ldr r1, _0812F13C  @ =0x06013C00
	mov r2, #128
	bl CpuFastSet
_0812F0A2:
	ldrb r0, [r5]
	lsl r0, r0, #2
	add r1, r6, #3
	add r2, r0, r1
	ldrb r0, [r2]
	cmp r0, #255
	beq _0812F0E8
	ldr r1, _0812F0F0  @ =gUnknown_0822B324
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r4, _0812F0F4  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812F140  @ =0x06013200
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F0FC  @ =gUnknown_02032200
	ldr r1, _0812F144  @ =0x06013600
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F104  @ =gUnknown_02032400
	ldr r1, _0812F148  @ =0x06013A00
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812F10C  @ =gUnknown_02032600
	ldr r1, _0812F14C  @ =0x06013E00
	mov r2, #128
	bl CpuFastSet
_0812F0E8:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812F0F0:
	.4byte gUnknown_0822B324
_0812F0F4:
	.4byte gUnknown_02032000
_0812F0F8:
	.4byte 0x06012000
_0812F0FC:
	.4byte gUnknown_02032200
_0812F100:
	.4byte 0x06012400
_0812F104:
	.4byte gUnknown_02032400
_0812F108:
	.4byte 0x06012800
_0812F10C:
	.4byte gUnknown_02032600
_0812F110:
	.4byte 0x06012C00
_0812F114:
	.4byte gUnknown_0822B624
_0812F118:
	.4byte gRam
_0812F11C:
	.4byte 0x00000C9B
_0812F120:
	.4byte 0x06012200
_0812F124:
	.4byte 0x06012600
_0812F128:
	.4byte 0x06012A00
_0812F12C:
	.4byte 0x06012E00
_0812F130:
	.4byte 0x06013000
_0812F134:
	.4byte 0x06013400
_0812F138:
	.4byte 0x06013800
_0812F13C:
	.4byte 0x06013C00
_0812F140:
	.4byte 0x06013200
_0812F144:
	.4byte 0x06013600
_0812F148:
	.4byte 0x06013A00
_0812F14C:
	.4byte 0x06013E00
	THUMB_FUNC_END sub_0812EF98

