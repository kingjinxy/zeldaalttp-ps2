	THUMB_FUNC_START sub_081095DC
sub_081095DC: @ 0x081095DC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r5, r3, #0
	ldr r7, _08109624  @ =gRam
	ldr r1, _08109628  @ =0x00001022
	add r0, r7, r1
	add r1, r3, r0
	ldrb r0, [r1]
	cmp r0, #208
	bhi _081095FA
	mov r0, #208
	strb r0, [r1]
_081095FA:
	ldr r2, _0810962C  @ =0x00000FC2
	add r6, r7, r2
	add r0, r3, r6
	ldrb r0, [r0]
	cmp r0, #63
	bhi _08109642
	cmp r0, #0
	beq _08109638
	ldr r4, _08109630  @ =0x00000F92
	add r1, r7, r4
	add r1, r3, r1
	ldr r2, _08109634  @ =gUnknown_0817C2FC
	add r4, r4, #32
	add r0, r7, r4
	add r0, r3, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _0810973C
	.byte 0x00
	.byte 0x00
_08109624:
	.4byte gRam
_08109628:
	.4byte 0x00001022
_0810962C:
	.4byte 0x00000FC2
_08109630:
	.4byte 0x00000F92
_08109634:
	.4byte gUnknown_0817C2FC
_08109638:
	add r0, r3, #0
	mov r1, #5
	bl sub_081098B0
	b _0810973C
_08109642:
	cmp r0, #64
	beq _0810964E
	add r0, r3, #0
	bl sub_0810A6A0
	b _0810973C
_0810964E:
	ldr r1, _08109748  @ =0x000010A2
	add r0, r7, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	mov r0, #201
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	ldr r2, _0810974C  @ =0x00000FB2
	add r2, r2, r7
	mov r8, r2
	add r0, r5, r2
	ldrb r3, [r0]
	mov r0, #150
	lsl r0, r0, #4
	add r2, r7, r0
	ldr r0, _08109750  @ =gUnknown_0817C2D4
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r0, _08109754  @ =gUnknown_0817C2D6
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldrh r0, [r2]
	add r1, r1, r0
	strh r1, [r2]
	ldr r1, _08109758  @ =0x00000EE2
	add r0, r7, r1
	add r0, r4, r0
	ldrb r1, [r2]
	strb r1, [r0]
	ldr r2, _0810975C  @ =0x00000F02
	add r0, r7, r2
	add r0, r4, r0
	ldr r2, _08109760  @ =0x00000961
	add r1, r7, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _08109764  @ =0x00000964
	add r2, r7, r0
	ldr r0, _08109768  @ =gUnknown_0817C2D8
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r0, _0810976C  @ =gUnknown_0817C2DA
	add r3, r3, r0
	ldrb r0, [r3]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldrh r0, [r2]
	add r1, r1, r0
	strh r1, [r2]
	ldr r1, _08109770  @ =0x00000ED2
	add r0, r7, r1
	add r0, r4, r0
	ldrb r1, [r2]
	strb r1, [r0]
	ldr r2, _08109774  @ =0x00000EF2
	add r0, r7, r2
	add r0, r4, r0
	ldr r2, _08109778  @ =0x00000965
	add r1, r7, r2
	ldrb r1, [r1]
	strb r1, [r0]
	lsl r5, r4, #24
	lsr r5, r5, #24
	add r0, r5, #0
	mov r1, #31
	bl sub_080C35FC
	bl sub_080CA32C
	sub r0, r0, #2
	mov r1, #15
	and r0, r0, r1
	ldr r1, _0810977C  @ =0x00000F22
	add r2, r7, r1
	add r2, r4, r2
	ldr r1, _08109780  @ =gUnknown_0817C2DC
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r1, _08109784  @ =0x00000F12
	add r2, r7, r1
	add r2, r4, r2
	ldr r1, _08109788  @ =gUnknown_0817C2EC
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	add r1, r4, r6
	mov r0, #112
	strb r0, [r1]
	ldr r2, _0810978C  @ =0x00001092
	add r0, r7, r2
	add r0, r4, r0
	mov r2, #2
	strb r2, [r0]
	ldr r1, _08109790  @ =0x00001122
	add r0, r7, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _08109794  @ =0x00001012
	add r0, r7, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	ldr r1, _08109798  @ =0x00000E75
	add r0, r7, r1
	add r0, r4, r0
	mov r1, #132
	strb r1, [r0]
	add r4, r4, r8
	strb r2, [r4]
	add r0, r5, #0
	bl sub_0810A820
_0810973C:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08109748:
	.4byte 0x000010A2
_0810974C:
	.4byte 0x00000FB2
_08109750:
	.4byte gUnknown_0817C2D4
_08109754:
	.4byte gUnknown_0817C2D6
_08109758:
	.4byte 0x00000EE2
_0810975C:
	.4byte 0x00000F02
_08109760:
	.4byte 0x00000961
_08109764:
	.4byte 0x00000964
_08109768:
	.4byte gUnknown_0817C2D8
_0810976C:
	.4byte gUnknown_0817C2DA
_08109770:
	.4byte 0x00000ED2
_08109774:
	.4byte 0x00000EF2
_08109778:
	.4byte 0x00000965
_0810977C:
	.4byte 0x00000F22
_08109780:
	.4byte gUnknown_0817C2DC
_08109784:
	.4byte 0x00000F12
_08109788:
	.4byte gUnknown_0817C2EC
_0810978C:
	.4byte 0x00001092
_08109790:
	.4byte 0x00001122
_08109794:
	.4byte 0x00001012
_08109798:
	.4byte 0x00000E75
	THUMB_FUNC_END sub_081095DC

