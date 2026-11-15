	THUMB_FUNC_START sub_080B1DB4
sub_080B1DB4: @ 0x080B1DB4
	push {r4-r7,lr}
	sub sp, sp, #4
	bl sub_08069D20
	ldr r4, _080B1EA8  @ =gRam
	ldr r0, _080B1EAC  @ =0x000009B4
	add r1, r4, r0
	mov r2, #0
	mov r0, #17
	strb r0, [r1]
	ldr r1, _080B1EB0  @ =0x000009B5
	add r0, r4, r1
	strb r2, [r0]
	mov r0, #3
	bl sub_0806BD6C
	ldr r2, _080B1EB4  @ =0x0000050C
	add r1, r4, r2
	ldr r0, _080B1EB8  @ =0x00001421
	strh r0, [r1]
	ldr r0, _080B1EBC  @ =0x00000516
	add r1, r4, r0
	ldr r0, _080B1EC0  @ =0x000098C2
	strh r0, [r1]
	ldr r3, _080B1EC4  @ =gUnknown_0828A7E0
	mov r1, #192
	lsl r1, r1, #19
	mov r2, #128
	lsl r2, r2, #5
	add r0, r3, #0
	bl CpuFastSet
	ldr r1, _080B1EC8  @ =0x000009C6
	add r4, r4, r1
	ldrh r1, [r4]
	mov r6, #64
	add r0, r6, #0
	and r0, r0, r1
	ldr r3, _080B1ECC  @ =gUnknown_083BFEF8
	cmp r0, #0
	beq _080B1E08
	ldr r3, _080B1ED0  @ =gUnknown_083C0EF8
_080B1E08:
	ldr r1, _080B1ED4  @ =0x0600C000
	mov r2, #128
	lsl r2, r2, #3
	add r0, r3, #0
	bl CpuFastSet
	bl sub_080B1A3C
	ldr r5, _080B1ED8  @ =gUnknown_02000800
	ldr r1, _080B1EDC  @ =gUnknown_02010540
	mov r2, #128
	lsl r2, r2, #2
	add r0, r5, #0
	bl CpuSet
	ldrh r1, [r4]
	add r0, r6, #0
	and r0, r0, r1
	ldr r4, _080B1EE0  @ =gUnknown_083BFA58
	cmp r0, #0
	beq _080B1E34
	ldr r4, _080B1EE4  @ =gUnknown_083BFB58
_080B1E34:
	mov r7, sp
	add r7, r7, #2
	add r6, r5, #0
	mov r5, #255
_080B1E3C:
	ldrh r0, [r4]
	bl sub_08133468
	strh r0, [r6]
	add r4, r4, #2
	add r6, r6, #2
	sub r5, r5, #1
	cmp r5, #0
	bge _080B1E3C
	mov r0, sp
	mov r4, #0
	strh r4, [r0]
	ldr r1, _080B1EE8  @ =gUnknown_02000A60
	ldr r5, _080B1EEC  @ =0x01000010
	add r2, r5, #0
	bl CpuSet
	strh r4, [r7]
	ldr r1, _080B1EF0  @ =gUnknown_02000AA0
	add r0, r7, #0
	add r2, r5, #0
	bl CpuSet
	mov r0, #1
	bl sub_080B1B18
	bl sub_08133644
	ldr r1, _080B1EA8  @ =gRam
	ldr r0, _080B1EF4  @ =0x0000099B
	add r2, r1, r0
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	mov r2, #152
	lsl r2, r2, #4
	add r0, r1, r2
	strb r4, [r0]
	mov r0, #201
	lsl r0, r0, #4
	add r2, r1, r0
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	ldr r2, _080B1EF8  @ =0x00000A4C
	add r1, r1, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B1EA8:
	.4byte gRam
_080B1EAC:
	.4byte 0x000009B4
_080B1EB0:
	.4byte 0x000009B5
_080B1EB4:
	.4byte 0x0000050C
_080B1EB8:
	.4byte 0x00001421
_080B1EBC:
	.4byte 0x00000516
_080B1EC0:
	.4byte 0x000098C2
_080B1EC4:
	.4byte gUnknown_0828A7E0
_080B1EC8:
	.4byte 0x000009C6
_080B1ECC:
	.4byte gUnknown_083BFEF8
_080B1ED0:
	.4byte gUnknown_083C0EF8
_080B1ED4:
	.4byte 0x0600C000
_080B1ED8:
	.4byte gUnknown_02000800
_080B1EDC:
	.4byte gUnknown_02010540
_080B1EE0:
	.4byte gUnknown_083BFA58
_080B1EE4:
	.4byte gUnknown_083BFB58
_080B1EE8:
	.4byte gUnknown_02000A60
_080B1EEC:
	.4byte 0x01000010
_080B1EF0:
	.4byte gUnknown_02000AA0
_080B1EF4:
	.4byte 0x0000099B
_080B1EF8:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080B1DB4

