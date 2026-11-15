	THUMB_FUNC_START sub_080ADFC4
sub_080ADFC4: @ 0x080ADFC4
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r2, r0, #24
	cmp r2, #0
	bne _080AE0D4
	ldr r4, _080AE0DC  @ =gRam
	mov r1, sp
	ldr r3, _080AE0E0  @ =0x00000E29
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r3, _080AE0E4  @ =0x00001855
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r3, _080AE0E8  @ =0x00000E1F
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r0, #162
	lsl r0, r0, #4
	add r1, r4, r0
	mov r6, #0
	mov r0, #1
	strh r0, [r1]
	mov r1, sp
	ldr r2, _080AE0EC  @ =0x00001844
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #2
	strb r1, [r0]
	mov r1, sp
	ldr r3, _080AE0F0  @ =0x00001832
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #3
	strb r1, [r0]
	mov r1, sp
	ldr r2, _080AE0F4  @ =0x00000DED
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #127
	strb r1, [r0]
	ldr r0, _080AE0F8  @ =gUnknown_02006888
	mov r5, #40
	strb r5, [r0]
	ldr r3, _080AE0FC  @ =0x00000CA2
	add r1, r4, r3
	mov r0, #9
	strh r0, [r1]
	ldr r1, _080AE100  @ =gUnknown_02006892
	mov r0, #64
	strb r0, [r1]
	mov r0, sp
	ldrb r0, [r0]
	mov r1, #44
	bl sub_080C19F8
	ldr r0, _080AE104  @ =gUnknown_02006880
	strb r6, [r0]
	ldr r1, _080AE108  @ =gUnknown_02006881
	mov r0, #8
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #16
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #24
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #32
	strb r0, [r1]
	ldr r0, _080AE10C  @ =gUnknown_02006885
	strb r5, [r0]
	add r1, r1, #2
	mov r0, #48
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #56
	strb r0, [r1]
	add r1, r1, #13
	mov r2, #182
	lsl r2, r2, #5
	add r0, r4, r2
	ldrh r3, [r0]
	strh r3, [r1]
	ldr r1, _080AE110  @ =0x00000958
	add r0, r4, r1
	ldrh r0, [r0]
	sub r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	ldr r2, _080AE114  @ =gUnknown_0200688C
	mov r1, #240
	and r0, r0, r1
	strh r0, [r2]
	ldr r1, _080AE118  @ =0x000016C4
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r2, _080AE11C  @ =0x00000964
	add r4, r4, r2
	strh r1, [r4]
	ldr r0, _080AE120  @ =gUnknown_02006896
	strh r1, [r0]
	sub r0, r0, #8
	add r1, r1, #8
	strh r1, [r0]
	ldr r1, _080AE124  @ =gUnknown_0200688A
	add r0, r3, #0
	sub r0, r0, #16
	strh r0, [r1]
	ldr r0, _080AE128  @ =gUnknown_02006890
	add r3, r3, #20
	strh r3, [r0]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_080AE0D4:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080AE0DC:
	.4byte gRam
_080AE0E0:
	.4byte 0x00000E29
_080AE0E4:
	.4byte 0x00001855
_080AE0E8:
	.4byte 0x00000E1F
_080AE0EC:
	.4byte 0x00001844
_080AE0F0:
	.4byte 0x00001832
_080AE0F4:
	.4byte 0x00000DED
_080AE0F8:
	.4byte gUnknown_02006888
_080AE0FC:
	.4byte 0x00000CA2
_080AE100:
	.4byte gUnknown_02006892
_080AE104:
	.4byte gUnknown_02006880
_080AE108:
	.4byte gUnknown_02006881
_080AE10C:
	.4byte gUnknown_02006885
_080AE110:
	.4byte 0x00000958
_080AE114:
	.4byte gUnknown_0200688C
_080AE118:
	.4byte 0x000016C4
_080AE11C:
	.4byte 0x00000964
_080AE120:
	.4byte gUnknown_02006896
_080AE124:
	.4byte gUnknown_0200688A
_080AE128:
	.4byte gUnknown_02006890
	THUMB_FUNC_END sub_080ADFC4

