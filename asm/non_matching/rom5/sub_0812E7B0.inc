	THUMB_FUNC_START sub_0812E7B0
sub_0812E7B0: @ 0x0812E7B0
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r0, _0812E884  @ =gUnknown_0822B324
	mov r9, r0
	ldr r4, _0812E888  @ =gRam
	ldr r1, _0812E88C  @ =0x00000C9C
	add r0, r4, r1
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r9
	ldr r0, [r0]
	ldr r5, _0812E890  @ =gUnknown_02032000
	add r1, r5, #0
	bl LZ77UnCompWram
	ldr r1, _0812E894  @ =0x06011000
	add r0, r5, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812E898  @ =gUnknown_02032200
	mov r8, r0
	ldr r1, _0812E89C  @ =0x06011400
	mov r2, #128
	bl CpuFastSet
	ldr r7, _0812E8A0  @ =gUnknown_02032400
	ldr r1, _0812E8A4  @ =0x06011800
	add r0, r7, #0
	mov r2, #128
	bl CpuFastSet
	ldr r6, _0812E8A8  @ =gUnknown_02032600
	ldr r1, _0812E8AC  @ =0x06011C00
	add r0, r6, #0
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812E8B0  @ =0x000009AC
	add r4, r4, r1
	ldrb r0, [r4]
	cmp r0, #1
	beq _0812E86E
	mov r1, r9
	ldr r0, [r1, #24]
	add r1, r5, #0
	bl LZ77UnCompWram
	ldr r1, _0812E8B4  @ =0x06010200
	add r0, r5, #0
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812E8B8  @ =0x06010600
	mov r0, r8
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812E8BC  @ =0x06010A00
	add r0, r7, #0
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812E8C0  @ =0x06010E00
	add r0, r6, #0
	mov r2, #128
	bl CpuFastSet
	mov r1, r9
	ldr r0, [r1, #28]
	add r1, r5, #0
	bl LZ77UnCompWram
	ldr r1, _0812E8C4  @ =0x06011200
	add r0, r5, #0
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812E8C8  @ =0x06011600
	mov r0, r8
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812E8CC  @ =0x06011A00
	add r0, r7, #0
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812E8D0  @ =0x06011E00
	add r0, r6, #0
	mov r2, #128
	bl CpuFastSet
_0812E86E:
	ldr r0, _0812E8D4  @ =gUnknown_0823482C
	ldr r1, _0812E8D8  @ =0x06014000
	bl LZ77UnCompVram
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812E884:
	.4byte gUnknown_0822B324
_0812E888:
	.4byte gRam
_0812E88C:
	.4byte 0x00000C9C
_0812E890:
	.4byte gUnknown_02032000
_0812E894:
	.4byte 0x06011000
_0812E898:
	.4byte gUnknown_02032200
_0812E89C:
	.4byte 0x06011400
_0812E8A0:
	.4byte gUnknown_02032400
_0812E8A4:
	.4byte 0x06011800
_0812E8A8:
	.4byte gUnknown_02032600
_0812E8AC:
	.4byte 0x06011C00
_0812E8B0:
	.4byte 0x000009AC
_0812E8B4:
	.4byte 0x06010200
_0812E8B8:
	.4byte 0x06010600
_0812E8BC:
	.4byte 0x06010A00
_0812E8C0:
	.4byte 0x06010E00
_0812E8C4:
	.4byte 0x06011200
_0812E8C8:
	.4byte 0x06011600
_0812E8CC:
	.4byte 0x06011A00
_0812E8D0:
	.4byte 0x06011E00
_0812E8D4:
	.4byte gUnknown_0823482C
_0812E8D8:
	.4byte 0x06014000
	THUMB_FUNC_END sub_0812E7B0

