	THUMB_FUNC_START sub_0811975C
sub_0811975C: @ 0x0811975C
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r1, _08119790  @ =gRam
	ldr r2, _08119794  @ =0x000009AD
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08119772
	b _08119A5E
_08119772:
	ldr r3, _08119798  @ =0x00000E29
	add r0, r1, r3
	add r2, r7, r0
	ldrb r0, [r2]
	sub r1, r0, #1
	strb r1, [r2]
	lsl r0, r1, #24
	cmp r0, #0
	blt _0811979C
	lsr r0, r0, #24
	cmp r0, #3
	bls _0811978C
	b _08119AD0
_0811978C:
	b _081197A2
	.byte 0x00
	.byte 0x00
_08119790:
	.4byte gRam
_08119794:
	.4byte 0x000009AD
_08119798:
	.4byte 0x00000E29
_0811979C:
	mov r0, #255
	orr r1, r1, r0
	strb r1, [r2]
_081197A2:
	add r0, r7, #0
	bl sub_080BF774
	add r0, r7, #0
	bl sub_080C1768
	ldr r0, _081198D4  @ =gBow
	ldrb r0, [r0]
	cmp r0, #2
	bls _081197CC
	ldr r0, _081198D8  @ =gRam
	ldr r4, _081198DC  @ =0x00000996
	add r0, r0, r4
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _081197CC
	add r0, r7, #0
	bl sub_08119EF0
_081197CC:
	ldr r4, _081198D8  @ =gRam
	ldr r6, _081198E0  @ =0x000009B2
	add r0, r4, r6
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _08119820
	add r0, r7, #0
	bl sub_080BFC34
	ldr r0, _081198E4  @ =0x00000964
	add r2, r4, r0
	mov r1, #0
	ldrsh r0, [r2, r1]
	add r6, r6, #92
	add r3, r4, r6
	ldrh r1, [r3]
	and r0, r0, r1
	asr r0, r0, #3
	strh r0, [r2]
	mov r0, #150
	lsl r0, r0, #4
	add r2, r4, r0
	ldrh r1, [r2]
	ldrh r0, [r3]
	and r0, r0, r1
	strh r0, [r2]
	mov r0, #1
	bl sub_080A0534
	cmp r0, #0
	beq _08119820
	ldr r0, _081198D4  @ =gBow
	ldrb r0, [r0]
	cmp r0, #2
	bhi _08119820
	ldr r1, _081198E8  @ =0x00000E15
	add r0, r4, r1
	add r0, r7, r0
	mov r1, #0
	strb r1, [r0]
_08119820:
	ldr r6, _081198D8  @ =gRam
	ldr r2, _081198EC  @ =0x0000183C
	add r0, r6, r2
	add r5, r7, r0
	mov r0, #255
	strb r0, [r5]
	add r0, r7, #0
	mov r1, sp
	bl sub_080C09FC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	beq _08119914
	add r0, r7, #0
	mov r1, sp
	bl sub_080BFA64
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	beq _0811984E
	b _08119A5E
_0811984E:
	ldr r3, _081198F0  @ =0x0000185B
	add r1, r6, r3
	add r1, r7, r1
	mov r0, sp
	ldrb r0, [r0]
	mov r4, #0
	mov r12, r4
	strb r0, [r1]
	mov r2, sp
	ldr r1, _081198F4  @ =0x00000E3D
	add r0, r6, r1
	add r0, r7, r0
	ldrb r0, [r0]
	mov r1, #3
	and r1, r1, r0
	lsl r0, r1, #1
	strb r0, [r2]
	ldr r2, _081198F8  @ =0x00000DC5
	add r5, r6, r2
	add r5, r7, r5
	ldrb r0, [r5]
	ldr r3, _081198FC  @ =0x00000DD9
	add r4, r6, r3
	add r4, r7, r4
	ldrb r2, [r4]
	lsl r2, r2, #8
	ldr r3, _08119900  @ =gUnknown_0817F3BC
	lsl r1, r1, #1
	add r1, r1, r3
	orr r0, r0, r2
	ldrh r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	strb r0, [r5]
	lsr r0, r0, #8
	strb r0, [r4]
	ldr r0, _08119904  @ =0x00000DCF
	add r4, r6, r0
	add r4, r7, r4
	ldrb r1, [r4]
	ldr r2, _08119908  @ =0x00000DE3
	add r3, r6, r2
	add r3, r7, r3
	ldrb r2, [r3]
	lsl r2, r2, #8
	ldr r5, _0811990C  @ =gUnknown_0817F3C4
	mov r0, sp
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	orr r1, r1, r2
	ldrh r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	strb r1, [r4]
	lsr r1, r1, #8
	strb r1, [r3]
	ldr r3, _08119910  @ =0x00000DB4
	add r0, r6, r3
	mov r4, r12
	strb r4, [r0]
	add r5, r6, #0
	b _08119A1A
	.byte 0x00
	.byte 0x00
_081198D4:
	.4byte gBow
_081198D8:
	.4byte gRam
_081198DC:
	.4byte 0x00000996
_081198E0:
	.4byte 0x000009B2
_081198E4:
	.4byte 0x00000964
_081198E8:
	.4byte 0x00000E15
_081198EC:
	.4byte 0x0000183C
_081198F0:
	.4byte 0x0000185B
_081198F4:
	.4byte 0x00000E3D
_081198F8:
	.4byte 0x00000DC5
_081198FC:
	.4byte 0x00000DD9
_08119900:
	.4byte gUnknown_0817F3BC
_08119904:
	.4byte 0x00000DCF
_08119908:
	.4byte 0x00000DE3
_0811990C:
	.4byte gUnknown_0817F3C4
_08119910:
	.4byte 0x00000DB4
_08119914:
	ldr r0, _081199CC  @ =0x00000DF7
	add r3, r6, r0
	add r3, r7, r3
	ldr r2, _081199D0  @ =0x00000DCF
	add r1, r6, r2
	add r1, r7, r1
	mov r2, sp
	ldr r4, _081199D4  @ =0x00000EE2
	add r0, r6, r4
	ldrb r2, [r2]
	add r0, r0, r2
	ldrb r1, [r1]
	ldrb r0, [r0]
	sub r1, r1, r0
	strb r1, [r3]
	ldr r0, _081199D8  @ =0x00000DED
	add r4, r6, r0
	add r4, r4, r7
	mov r12, r4
	ldr r2, _081199DC  @ =0x00000DC5
	add r1, r6, r2
	add r1, r7, r1
	mov r0, sp
	ldrb r2, [r0]
	ldr r3, _081199E0  @ =0x00000ED2
	add r0, r6, r3
	add r0, r2, r0
	ldrb r1, [r1]
	ldrb r3, [r0]
	ldr r4, _081199E4  @ =0x00001142
	add r0, r6, r4
	add r2, r2, r0
	sub r1, r1, r3
	ldrb r2, [r2]
	add r1, r1, r2
	mov r0, r12
	strb r1, [r0]
	mov r0, sp
	ldrb r0, [r0]
	strb r0, [r5]
	mov r0, sp
	ldrb r1, [r0]
	ldr r2, _081199E8  @ =0x00000FF2
	add r0, r6, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #101
	bne _08119A0E
	ldr r3, _081199EC  @ =0x00000F62
	add r0, r6, r3
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _08119A04
	mov r0, #71
	mov r1, #0
	bl sub_0812A324
	mov r1, sp
	ldr r4, _081199F0  @ =0x00000FE2
	add r0, r6, r4
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #128
	strb r1, [r0]
	ldr r2, _081199F4  @ =0x000010E2
	add r0, r6, r2
	strb r1, [r0]
	ldr r3, _081199F8  @ =0x00000DB4
	add r2, r6, r3
	ldrb r0, [r2]
	cmp r0, #8
	bhi _081199AA
	add r0, r0, #1
	strb r0, [r2]
_081199AA:
	mov r1, sp
	ldr r4, _081199FC  @ =0x00000F72
	add r0, r6, r4
	ldrb r1, [r1]
	add r0, r0, r1
	ldrb r1, [r2]
	strb r1, [r0]
	mov r0, sp
	ldr r2, _08119A00  @ =0x000010A2
	add r1, r6, r2
	ldrb r0, [r0]
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r5, r6, #0
	b _08119A1A
_081199CC:
	.4byte 0x00000DF7
_081199D0:
	.4byte 0x00000DCF
_081199D4:
	.4byte 0x00000EE2
_081199D8:
	.4byte 0x00000DED
_081199DC:
	.4byte 0x00000DC5
_081199E0:
	.4byte 0x00000ED2
_081199E4:
	.4byte 0x00001142
_081199E8:
	.4byte 0x00000FF2
_081199EC:
	.4byte 0x00000F62
_081199F0:
	.4byte 0x00000FE2
_081199F4:
	.4byte 0x000010E2
_081199F8:
	.4byte 0x00000DB4
_081199FC:
	.4byte 0x00000F72
_08119A00:
	.4byte 0x000010A2
_08119A04:
	ldr r3, _08119A68  @ =0x000010B2
	add r0, r6, r3
	add r0, r1, r0
	mov r1, #4
	strb r1, [r0]
_08119A0E:
	ldr r2, _08119A6C  @ =gRam
	ldr r4, _08119A70  @ =0x00000DB4
	add r1, r2, r4
	mov r0, #0
	strb r0, [r1]
	add r5, r2, #0
_08119A1A:
	add r4, r5, #0
	mov r0, sp
	ldr r6, _08119A74  @ =0x00000FF2
	add r1, r4, r6
	ldrb r0, [r0]
	add r1, r1, r0
	ldrb r0, [r1]
	cmp r0, #27
	beq _08119A34
	add r0, r7, #0
	mov r1, #28
	bl sub_080C19F8
_08119A34:
	ldr r1, _08119A78  @ =0x00000E29
	add r0, r4, r1
	add r0, r7, r0
	mov r1, #0
	strb r1, [r0]
	ldr r2, _08119A7C  @ =0x00000E15
	add r0, r4, r2
	add r0, r7, r0
	mov r1, #10
	strb r1, [r0]
	ldr r3, _08119A80  @ =0x00001844
	add r0, r4, r3
	add r0, r7, r0
	mov r1, #1
	strb r1, [r0]
	ldr r6, _08119A84  @ =0x0000185B
	add r0, r4, r6
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08119A88
_08119A5E:
	add r0, r7, #0
	bl sub_08119C98
	b _08119AD0
	.byte 0x00
	.byte 0x00
_08119A68:
	.4byte 0x000010B2
_08119A6C:
	.4byte gRam
_08119A70:
	.4byte 0x00000DB4
_08119A74:
	.4byte 0x00000FF2
_08119A78:
	.4byte 0x00000E29
_08119A7C:
	.4byte 0x00000E15
_08119A80:
	.4byte 0x00001844
_08119A84:
	.4byte 0x0000185B
_08119A88:
	mov r1, #149
	lsl r1, r1, #4
	add r0, r5, r1
	ldr r2, _08119AD8  @ =0x00000952
	add r1, r5, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	ldr r4, _08119ADC  @ =0x00000DCF
	add r3, r5, r4
	add r3, r7, r3
	sub r0, r0, r1
	ldrb r6, [r3]
	add r0, r0, r6
	mov r1, #150
	lsl r1, r1, #4
	add r4, r5, r1
	strh r0, [r4]
	add r2, r2, #4
	add r0, r5, r2
	ldr r6, _08119AE0  @ =0x00000958
	add r1, r5, r6
	ldrh r0, [r0]
	ldrh r2, [r1]
	ldr r6, _08119AE4  @ =0x00000DC5
	add r1, r5, r6
	add r1, r7, r1
	sub r0, r0, r2
	ldrb r2, [r1]
	add r0, r0, r2
	ldr r6, _08119AE8  @ =0x00000964
	add r2, r5, r6
	strh r0, [r2]
	ldrb r0, [r4]
	strb r0, [r3]
	ldrb r0, [r2]
	strb r0, [r1]
_08119AD0:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_08119AD8:
	.4byte 0x00000952
_08119ADC:
	.4byte 0x00000DCF
_08119AE0:
	.4byte 0x00000958
_08119AE4:
	.4byte 0x00000DC5
_08119AE8:
	.4byte 0x00000964
	THUMB_FUNC_END sub_0811975C

