	THUMB_FUNC_START sub_080A1018
sub_080A1018: @ 0x080A1018
	push {r4,r5,lr}
	ldr r5, _080A1058  @ =gRam
	ldr r1, _080A105C  @ =0x0000179E
	add r0, r5, r1
	ldr r2, _080A1060  @ =0x0000177A
	add r1, r5, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	add r4, r0, #0
	orr r4, r4, r2
	cmp r4, #0
	bne _080A110A
	bl sub_08092BF4
	ldr r3, _080A1064  @ =0x000016E9
	add r0, r5, r3
	strb r4, [r0]
	mov r2, #15
	add r4, r5, #0
	ldr r0, _080A1068  @ =0x00000FA2
	add r1, r4, r0
_080A1042:
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A106C
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r0, #0
	bge _080A1042
	b _080A1164
	.byte 0x00
	.byte 0x00
_080A1058:
	.4byte gRam
_080A105C:
	.4byte 0x0000179E
_080A1060:
	.4byte 0x0000177A
_080A1064:
	.4byte 0x000016E9
_080A1068:
	.4byte 0x00000FA2
_080A106C:
	ldr r1, _080A107C  @ =0x000017FA
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #5
	bne _080A1084
	ldr r2, _080A1080  @ =0x00001789
	add r1, r4, r2
	b _080A108C
_080A107C:
	.4byte 0x000017FA
_080A1080:
	.4byte 0x00001789
_080A1084:
	cmp r0, #6
	bne _080A1098
	ldr r3, _080A1094  @ =0x00001789
	add r1, r4, r3
_080A108C:
	mov r0, #1
	strb r0, [r1]
	b _080A1116
	.byte 0x00
	.byte 0x00
_080A1094:
	.4byte 0x00001789
_080A1098:
	ldr r1, _080A10B4  @ =0x000009B2
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080A10BC
	bl sub_0808164C
	ldr r2, _080A10B8  @ =0x00000978
	add r1, r4, r2
	strb r0, [r1]
	b _080A10C0
	.byte 0x00
	.byte 0x00
_080A10B4:
	.4byte 0x000009B2
_080A10B8:
	.4byte 0x00000978
_080A10BC:
	bl sub_0808CDA8
_080A10C0:
	mov r2, #8
	ldr r5, _080A10E4  @ =gRam
	ldr r3, _080A10E8  @ =0x00000978
	add r0, r5, r3
	mov r1, #0
	ldrsb r1, [r0, r1]
	ldr r3, _080A10EC  @ =gUnknown_08168C40
_080A10CE:
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r1, r0
	beq _080A10F0
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r0, #0
	bge _080A10CE
	b _080A1164
	.byte 0x00
	.byte 0x00
_080A10E4:
	.4byte gRam
_080A10E8:
	.4byte 0x00000978
_080A10EC:
	.4byte gUnknown_08168C40
_080A10F0:
	ldr r0, _080A116C  @ =0x0000179E
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
	add r0, r2, #0
	bl Sprite_SpawnThrowableTerrain
	ldr r1, _080A1170  @ =0x00000546
	add r2, r5, r1
	ldrb r1, [r2]
	mov r0, #17
	and r0, r0, r1
	strb r0, [r2]
_080A110A:
	ldr r2, _080A1174  @ =gRam
	ldr r3, _080A1178  @ =0x00001789
	add r1, r2, r3
	mov r0, #0
	strb r0, [r1]
	add r5, r2, #0
_080A1116:
	ldr r1, _080A117C  @ =0x000016E8
	add r0, r5, r1
	mov r2, #0
	strb r2, [r0]
	ldr r0, _080A1180  @ =gUnknown_08168C2C
	ldrb r1, [r0]
	ldr r3, _080A1184  @ =0x00001794
	add r0, r5, r3
	strb r1, [r0]
	ldr r0, _080A1188  @ =0x00001792
	add r1, r5, r0
	mov r3, #1
	mov r0, #1
	strb r0, [r1]
	ldr r0, _080A118C  @ =0x00001791
	add r1, r5, r0
	mov r0, #128
	strb r0, [r1]
	ldr r1, _080A1190  @ =0x00001793
	add r0, r5, r1
	strb r2, [r0]
	ldr r0, _080A1194  @ =0x00001719
	add r1, r5, r0
	mov r0, #12
	strb r0, [r1]
	ldr r1, _080A1198  @ =0x000016D4
	add r0, r5, r1
	strb r2, [r0]
	ldr r0, _080A119C  @ =0x00001727
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
	ldr r2, _080A11A0  @ =0x00001705
	add r1, r5, r2
	ldrb r0, [r1]
	orr r3, r3, r0
	strb r3, [r1]
_080A1164:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A116C:
	.4byte 0x0000179E
_080A1170:
	.4byte 0x00000546
_080A1174:
	.4byte gRam
_080A1178:
	.4byte 0x00001789
_080A117C:
	.4byte 0x000016E8
_080A1180:
	.4byte gUnknown_08168C2C
_080A1184:
	.4byte 0x00001794
_080A1188:
	.4byte 0x00001792
_080A118C:
	.4byte 0x00001791
_080A1190:
	.4byte 0x00001793
_080A1194:
	.4byte 0x00001719
_080A1198:
	.4byte 0x000016D4
_080A119C:
	.4byte 0x00001727
_080A11A0:
	.4byte 0x00001705
	THUMB_FUNC_END sub_080A1018

