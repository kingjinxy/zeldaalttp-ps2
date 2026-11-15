	THUMB_FUNC_START sub_080716E4
sub_080716E4: @ 0x080716E4
	push {r4-r6,lr}
	asr r0, r0, #1
	asr r1, r1, #1
	ldr r4, _080717BC  @ =gRam
	add r0, r0, #1
	lsl r0, r0, #1
	mov r3, #149
	lsl r3, r3, #4
	add r2, r4, r3
	add r3, r0, r2
	lsl r1, r1, #1
	ldr r6, _080717C0  @ =0x00000B74
	add r0, r4, r6
	add r1, r1, r0
	ldrh r5, [r3]
	mov r0, #0
	ldrsh r2, [r3, r0]
	mov r6, #0
	ldrsh r0, [r1, r6]
	cmp r2, r0
	bne _08071710
	b _080718BA
_08071710:
	mov r0, #150
	lsl r0, r0, #4
	add r6, r4, r0
	ldrh r0, [r6]
	add r0, r5, r0
	strh r0, [r3]
	ldr r2, _080717C4  @ =0x00000968
	add r1, r4, r2
	ldrh r2, [r6]
	ldrh r3, [r1]
	add r0, r2, r3
	strh r0, [r1]
	mov r0, #151
	lsl r0, r0, #4
	add r5, r4, r0
	mov r1, #0
	ldrsh r0, [r5, r1]
	add r0, r0, #1
	lsl r0, r0, #1
	ldr r1, _080717C8  @ =0x00000B8C
	add r3, r4, r1
	add r0, r0, r3
	ldrh r1, [r0]
	add r2, r2, r1
	strh r2, [r0]
	mov r2, #0
	ldrsh r0, [r5, r2]
	lsl r1, r0, #1
	add r1, r1, r3
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	add r0, r0, #2
	strh r0, [r1]
	ldr r1, _080717CC  @ =gUnknown_0814FB70
	ldr r3, _080717D0  @ =0x000009C6
	add r0, r4, r3
	ldrh r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08071768
	b _080718BA
_08071768:
	mov r1, #0
	ldrsh r0, [r6, r1]
	cmp r0, #0
	blt _0807182C
	mov r2, #0
	ldrsh r0, [r5, r2]
	cmp r0, #0
	bne _080717DC
	sub r3, r3, #110
	add r0, r4, r3
	ldrh r1, [r0]
	mov r0, #248
	lsl r0, r0, #5
	and r0, r0, r1
	ldr r6, _080717D4  @ =0x00000B96
	add r3, r4, r6
	ldrh r1, [r3]
	cmp r0, r1
	beq _08071790
	b _080718BA
_08071790:
	ldr r2, _080717D8  @ =0x000009BA
	add r5, r4, r2
	ldrb r0, [r5]
	cmp r0, #1
	bls _0807179C
	b _080718BA
_0807179C:
	sub r6, r6, #2
	add r2, r4, r6
	mov r1, #128
	lsl r1, r1, #1
	add r0, r1, #0
	ldrh r4, [r2]
	add r1, r0, r4
	strh r1, [r2]
	ldrh r6, [r3]
	add r0, r0, r6
	strh r0, [r3]
	bl sub_08075DF0
	ldrb r0, [r5]
	add r0, r0, #1
	b _080718B8
_080717BC:
	.4byte gRam
_080717C0:
	.4byte 0x00000B74
_080717C4:
	.4byte 0x00000968
_080717C8:
	.4byte 0x00000B8C
_080717CC:
	.4byte gUnknown_0814FB70
_080717D0:
	.4byte 0x000009C6
_080717D4:
	.4byte 0x00000B96
_080717D8:
	.4byte 0x000009BA
_080717DC:
	ldr r1, _0807181C  @ =0x00000952
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #248
	lsl r0, r0, #5
	and r0, r0, r1
	ldr r2, _08071820  @ =0x00000B9A
	add r3, r4, r2
	ldrh r6, [r3]
	cmp r0, r6
	bne _080718BA
	ldr r0, _08071824  @ =0x000009BB
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #1
	bhi _080718BA
	ldr r1, _08071828  @ =0x00000B98
	add r2, r4, r1
	mov r4, #128
	lsl r4, r4, #1
	add r0, r4, #0
	ldrh r6, [r2]
	add r1, r0, r6
	strh r1, [r2]
	ldrh r1, [r3]
	add r0, r0, r1
	strh r0, [r3]
	bl sub_080761EC
	ldrb r0, [r5]
	add r0, r0, #1
	b _080718B8
_0807181C:
	.4byte 0x00000952
_08071820:
	.4byte 0x00000B9A
_08071824:
	.4byte 0x000009BB
_08071828:
	.4byte 0x00000B98
_0807182C:
	mov r2, #0
	ldrsh r0, [r5, r2]
	cmp r0, #0
	bne _08071880
	ldr r3, _0807186C  @ =0x00000958
	add r0, r4, r3
	ldrh r0, [r0]
	mov r1, #248
	lsl r1, r1, #5
	and r1, r1, r0
	ldr r6, _08071870  @ =0x00000B94
	add r2, r4, r6
	ldrh r0, [r2]
	ldr r3, _08071874  @ =0xFFFFFF00
	add r0, r0, r3
	cmp r1, r0
	bne _080718BA
	ldr r0, _08071878  @ =0x000009BA
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080718BA
	strh r1, [r2]
	ldr r1, _0807187C  @ =0x00000B96
	add r0, r4, r1
	ldrh r1, [r0]
	add r1, r1, r3
	strh r1, [r0]
	bl sub_08075BEC
	b _080718B4
	.byte 0x00
	.byte 0x00
_0807186C:
	.4byte 0x00000958
_08071870:
	.4byte 0x00000B94
_08071874:
	.4byte 0xFFFFFF00
_08071878:
	.4byte 0x000009BA
_0807187C:
	.4byte 0x00000B96
_08071880:
	ldr r2, _080718C0  @ =0x00000952
	add r0, r4, r2
	ldrh r0, [r0]
	mov r1, #248
	lsl r1, r1, #5
	and r1, r1, r0
	ldr r3, _080718C4  @ =0x00000B98
	add r2, r4, r3
	ldrh r0, [r2]
	ldr r3, _080718C8  @ =0xFFFFFF00
	add r0, r0, r3
	cmp r1, r0
	bne _080718BA
	ldr r6, _080718CC  @ =0x000009BB
	add r5, r4, r6
	ldrb r0, [r5]
	cmp r0, #0
	beq _080718BA
	strh r1, [r2]
	ldr r1, _080718D0  @ =0x00000B9A
	add r0, r4, r1
	ldrh r1, [r0]
	add r1, r1, r3
	strh r1, [r0]
	bl sub_08075FE8
_080718B4:
	ldrb r0, [r5]
	sub r0, r0, #1
_080718B8:
	strb r0, [r5]
_080718BA:
	pop {r4-r6}
	pop {r0}
	bx r0
_080718C0:
	.4byte 0x00000952
_080718C4:
	.4byte 0x00000B98
_080718C8:
	.4byte 0xFFFFFF00
_080718CC:
	.4byte 0x000009BB
_080718D0:
	.4byte 0x00000B9A
	THUMB_FUNC_END sub_080716E4

