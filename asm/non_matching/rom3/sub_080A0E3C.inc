	THUMB_FUNC_START sub_080A0E3C
sub_080A0E3C: @ 0x080A0E3C
	push {r4-r7,lr}
	ldr r0, _080A0EEC  @ =gRam
	ldr r2, _080A0EF0  @ =0x00001791
	add r1, r0, r2
	ldrb r1, [r1]
	add r7, r0, #0
	cmp r1, #0
	bne _080A0E4E
	b _080A0FFC
_080A0E4E:
	ldr r3, _080A0EF4  @ =0x00001792
	add r0, r7, r3
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080A0E6C
	ldr r0, _080A0EF8  @ =0x00001794
	add r1, r7, r0
	ldrb r0, [r1]
	cmp r0, #4
	bls _080A0E6C
	ldr r0, _080A0EFC  @ =gUnknown_08168C2C
	ldrb r0, [r0, #3]
	strb r0, [r1]
_080A0E6C:
	add r5, r7, #0
	ldr r1, _080A0EF4  @ =0x00001792
	add r4, r5, r1
	ldrb r0, [r4]
	cmp r0, #0
	beq _080A0E7C
	bl sub_080A38AC
_080A0E7C:
	ldrb r4, [r4]
	mov r0, #1
	and r0, r0, r4
	cmp r0, #0
	beq _080A0EA0
	ldr r2, _080A0F00  @ =0x000016D4
	add r0, r5, r2
	mov r1, #0
	strb r1, [r0]
	ldr r3, _080A0F04  @ =0x000016D3
	add r0, r5, r3
	strb r1, [r0]
	ldr r0, _080A0F08  @ =0x00001727
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
_080A0EA0:
	lsl r0, r4, #24
	cmp r0, #0
	bne _080A0EA8
	b _080A0FFC
_080A0EA8:
	ldr r1, _080A0EF8  @ =0x00001794
	add r6, r5, r1
	ldrb r0, [r6]
	sub r0, r0, #1
	strb r0, [r6]
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	beq _080A0EBC
	b _080A0FFC
_080A0EBC:
	mov r0, #2
	and r0, r0, r4
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _080A0F10
	ldr r2, _080A0EF0  @ =0x00001791
	add r0, r5, r2
	strb r3, [r0]
	sub r1, r1, #154
	add r0, r5, r1
	strb r3, [r0]
	sub r2, r2, #120
	add r0, r5, r2
	strb r3, [r0]
	ldr r0, _080A0F0C  @ =0x00001718
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #24
	beq _080A0EE6
	b _080A0FE6
_080A0EE6:
	strb r3, [r1]
	b _080A0FE6
	.byte 0x00
	.byte 0x00
_080A0EEC:
	.4byte gRam
_080A0EF0:
	.4byte 0x00001791
_080A0EF4:
	.4byte 0x00001792
_080A0EF8:
	.4byte 0x00001794
_080A0EFC:
	.4byte gUnknown_08168C2C
_080A0F00:
	.4byte 0x000016D4
_080A0F04:
	.4byte 0x000016D3
_080A0F08:
	.4byte 0x00001727
_080A0F0C:
	.4byte 0x00001718
_080A0F10:
	ldr r1, _080A0F64  @ =0x00001789
	add r3, r5, r1
	ldrb r2, [r3]
	cmp r2, #0
	beq _080A0FCC
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #9
	beq _080A0FE6
	strb r2, [r3]
	ldr r1, _080A0F68  @ =gUnknown_08168C49
	ldrb r0, [r3]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r6]
	ldr r1, _080A0F6C  @ =gUnknown_08168C53
	ldrb r0, [r3]
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r3, _080A0F70  @ =0x00001793
	add r0, r5, r3
	strb r1, [r0]
	cmp r2, #6
	bne _080A0FFC
	ldr r1, _080A0F74  @ =0x00000DB8
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _080A0F78  @ =0x000009B2
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080A0F80
	bl sub_0808164C
	ldr r3, _080A0F7C  @ =0x00000978
	add r1, r5, r3
	strb r0, [r1]
	b _080A0F84
	.byte 0x00
	.byte 0x00
_080A0F64:
	.4byte 0x00001789
_080A0F68:
	.4byte gUnknown_08168C49
_080A0F6C:
	.4byte gUnknown_08168C53
_080A0F70:
	.4byte 0x00001793
_080A0F74:
	.4byte 0x00000DB8
_080A0F78:
	.4byte 0x000009B2
_080A0F7C:
	.4byte 0x00000978
_080A0F80:
	bl sub_0808CDA8
_080A0F84:
	ldr r4, _080A0FB8  @ =gRam
	ldr r1, _080A0FBC  @ =0x00000978
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	add r2, r0, #1
	ldr r3, _080A0FC0  @ =0x00001718
	add r1, r4, r3
	mov r0, #24
	strb r0, [r1]
	ldr r0, _080A0FC4  @ =0x0000179E
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	add r0, r2, #0
	bl Sprite_SpawnThrowableTerrain
	ldr r1, _080A0FC8  @ =0x00000546
	add r4, r4, r1
	ldrb r1, [r4]
	mov r0, #17
	and r0, r0, r1
	strb r0, [r4]
	b _080A0FFC
	.byte 0x00
	.byte 0x00
_080A0FB8:
	.4byte gRam
_080A0FBC:
	.4byte 0x00000978
_080A0FC0:
	.4byte 0x00001718
_080A0FC4:
	.4byte 0x0000179E
_080A0FC8:
	.4byte 0x00000546
_080A0FCC:
	ldr r2, _080A1004  @ =0x00001793
	add r1, r7, r2
	ldrb r0, [r1]
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _080A1008  @ =gUnknown_08168C2C
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r6]
	strb r2, [r1]
	cmp r2, #3
	bne _080A0FFC
_080A0FE6:
	ldr r1, _080A100C  @ =gRam
	ldr r3, _080A1010  @ =0x00001792
	add r2, r1, r3
	mov r0, #0
	strb r0, [r2]
	ldr r0, _080A1014  @ =0x00001705
	add r1, r1, r0
	ldrb r2, [r1]
	mov r0, #198
	and r0, r0, r2
	strb r0, [r1]
_080A0FFC:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A1004:
	.4byte 0x00001793
_080A1008:
	.4byte gUnknown_08168C2C
_080A100C:
	.4byte gRam
_080A1010:
	.4byte 0x00001792
_080A1014:
	.4byte 0x00001705
	THUMB_FUNC_END sub_080A0E3C

