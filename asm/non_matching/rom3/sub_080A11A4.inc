	THUMB_FUNC_START sub_080A11A4
sub_080A11A4: @ 0x080A11A4
	push {r4,lr}
	ldr r2, _080A11DC  @ =gRam
	ldr r0, _080A11E0  @ =0x00001727
	add r3, r2, r0
	ldrb r1, [r3]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r3]
	ldr r1, _080A11E4  @ =0x000016D5
	add r0, r2, r1
	ldrb r0, [r0]
	lsr r3, r0, #1
	ldr r4, _080A11E8  @ =0x00000545
	add r0, r2, r4
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	beq _080A11D6
	ldr r0, _080A11EC  @ =gUnknown_08168C5D
	add r0, r3, r0
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _080A11F0
_080A11D6:
	mov r3, #0
	b _080A1212
	.byte 0x00
	.byte 0x00
_080A11DC:
	.4byte gRam
_080A11E0:
	.4byte 0x00001727
_080A11E4:
	.4byte 0x000016D5
_080A11E8:
	.4byte 0x00000545
_080A11EC:
	.4byte gUnknown_08168C5D
_080A11F0:
	ldr r0, _080A126C  @ =0x00001794
	add r1, r2, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080A1230
	ldr r1, _080A1270  @ =0x00001796
	add r0, r2, r1
	ldrb r0, [r0]
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #7
	bne _080A1212
	mov r3, #1
_080A1212:
	ldr r4, _080A1270  @ =0x00001796
	add r0, r2, r4
	strb r3, [r0]
	ldr r0, _080A1274  @ =gUnknown_08168C68
	add r0, r3, r0
	ldrb r1, [r0]
	sub r4, r4, #3
	add r0, r2, r4
	strb r1, [r0]
	ldr r0, _080A1278  @ =gUnknown_08168C61
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r3, _080A126C  @ =0x00001794
	add r0, r2, r3
	strb r1, [r0]
_080A1230:
	ldr r4, _080A127C  @ =0x00000544
	add r0, r2, r4
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080A1266
	ldr r3, _080A1270  @ =0x00001796
	add r0, r2, r3
	strb r1, [r0]
	ldr r4, _080A1280  @ =0x00001793
	add r0, r2, r4
	strb r1, [r0]
	add r3, r3, #114
	add r0, r2, r3
	strb r1, [r0]
	sub r4, r4, #170
	add r0, r2, r4
	strb r1, [r0]
	ldr r0, _080A1284  @ =0x00001705
	add r2, r2, r0
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
_080A1266:
	pop {r4}
	pop {r0}
	bx r0
_080A126C:
	.4byte 0x00001794
_080A1270:
	.4byte 0x00001796
_080A1274:
	.4byte gUnknown_08168C68
_080A1278:
	.4byte gUnknown_08168C61
_080A127C:
	.4byte 0x00000544
_080A1280:
	.4byte 0x00001793
_080A1284:
	.4byte 0x00001705
	THUMB_FUNC_END sub_080A11A4

