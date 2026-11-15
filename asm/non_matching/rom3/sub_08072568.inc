	THUMB_FUNC_START sub_08072568
sub_08072568: @ 0x08072568
	push {r4-r7,lr}
	ldr r0, _080725D4  @ =gRam
	mov r2, #162
	lsl r2, r2, #4
	add r1, r0, r2
	ldrh r1, [r1]
	add r6, r0, #0
	cmp r1, #0
	beq _0807257C
	b _080726A8
_0807257C:
	ldr r3, _080725D8  @ =0x00001770
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _08072588
	b _080726A8
_08072588:
	ldr r4, _080725DC  @ =0x00001649
	add r0, r6, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _08072594
	b _080726A8
_08072594:
	ldr r5, _080725E0  @ =0x00000B6E
	add r0, r6, r5
	ldrb r1, [r0]
	cmp r1, #0
	beq _080725A0
	b _080726B2
_080725A0:
	ldr r2, _080725E4  @ =0x00000547
	add r0, r6, r2
	ldrb r3, [r0]
	mov r0, #16
	and r0, r0, r3
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _080725F4
	ldr r3, _080725E8  @ =0x00000A4C
	add r0, r6, r3
	strh r1, [r0]
	ldr r4, _080725EC  @ =0x000009AD
	add r1, r6, r4
	mov r0, #1
	strb r0, [r1]
	ldr r5, _080725F0  @ =0x000009AC
	add r2, r6, r5
	ldrb r1, [r2]
	sub r3, r3, #50
	add r0, r6, r3
	strh r1, [r0]
	mov r0, #14
	strb r0, [r2]
	b _08072740
	.byte 0x00
	.byte 0x00
_080725D4:
	.4byte gRam
_080725D8:
	.4byte 0x00001770
_080725DC:
	.4byte 0x00001649
_080725E0:
	.4byte 0x00000B6E
_080725E4:
	.4byte 0x00000547
_080725E8:
	.4byte 0x00000A4C
_080725EC:
	.4byte 0x000009AD
_080725F0:
	.4byte 0x000009AC
_080725F4:
	ldr r4, _08072630  @ =0x00000546
	add r0, r6, r4
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	beq _08072644
	ldr r5, _08072634  @ =0x00000A4C
	add r0, r6, r5
	mov r3, #0
	strh r2, [r0]
	ldr r0, _08072638  @ =0x000009AD
	add r1, r6, r0
	mov r0, #7
	strb r0, [r1]
	ldr r1, _0807263C  @ =0x000009AC
	add r2, r6, r1
	ldrb r1, [r2]
	ldr r4, _08072640  @ =0x00000A1A
	add r0, r6, r4
	strh r1, [r0]
	mov r0, #14
	strb r0, [r2]
	sub r5, r5, #175
	add r0, r6, r5
	strb r3, [r0]
	b _08072740
	.byte 0x00
	.byte 0x00
_08072630:
	.4byte 0x00000546
_08072634:
	.4byte 0x00000A4C
_08072638:
	.4byte 0x000009AD
_0807263C:
	.4byte 0x000009AC
_08072640:
	.4byte 0x00000A1A
_08072644:
	mov r0, #32
	and r0, r0, r3
	cmp r0, #0
	beq _080726A8
	ldr r1, _0807268C  @ =0x00001AE2
	add r0, r6, r1
	ldrb r1, [r0]
	ldr r2, _08072690  @ =0x00001AEE
	add r0, r6, r2
	strb r1, [r0]
	ldr r3, _08072694  @ =0x000009AC
	add r4, r6, r3
	ldrb r5, [r4]
	ldr r0, _08072698  @ =0x00000189
	bl sub_080AF4FC
	strb r5, [r4]
	ldr r5, _0807269C  @ =0x000009E8
	add r0, r6, r5
	strh r7, [r0]
	ldr r0, _080726A0  @ =0x000009AD
	add r1, r6, r0
	mov r0, #11
	strb r0, [r1]
	ldrb r1, [r4]
	ldr r2, _080726A4  @ =0x00000A1A
	add r0, r6, r2
	strh r1, [r0]
	mov r0, #14
	strb r0, [r4]
	mov r0, #117
	mov r1, #0
	bl sub_0812A324
	b _08072740
	.byte 0x00
	.byte 0x00
_0807268C:
	.4byte 0x00001AE2
_08072690:
	.4byte 0x00001AEE
_08072694:
	.4byte 0x000009AC
_08072698:
	.4byte 0x00000189
_0807269C:
	.4byte 0x000009E8
_080726A0:
	.4byte 0x000009AD
_080726A4:
	.4byte 0x00000A1A
_080726A8:
	ldr r3, _08072720  @ =0x00000B6E
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080726BC
_080726B2:
	ldr r4, _08072720  @ =0x00000B6E
	add r0, r6, r4
	ldrb r0, [r0]
	bl sub_0808F148
_080726BC:
	bl sub_0809E2FC
	ldr r4, _08072724  @ =gRam
	ldr r5, _08072728  @ =0x00000B5C
	add r0, r4, r5
	ldrb r0, [r0]
	cmp r0, #255
	beq _080726D0
	bl sub_080AB04C
_080726D0:
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrh r1, [r0]
	mov r2, #240
	lsl r2, r2, #5
	add r0, r2, #0
	and r0, r0, r1
	lsl r0, r0, #3
	ldr r5, _0807272C  @ =0x00000C86
	add r3, r4, r5
	ldr r5, _08072730  @ =0x000016C4
	add r1, r4, r5
	ldrh r1, [r1]
	and r2, r2, r1
	orr r0, r0, r2
	lsr r0, r0, #8
	strh r0, [r3]
	bl sub_0812FA28
	bl sub_080718D4
	ldr r1, _08072734  @ =0x000009AC
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #11
	beq _0807273C
	ldr r2, _08072738  @ =0x000009AD
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _08072714
	bl sub_0808BED8
_08072714:
	bl sub_08131840
	bl sub_08071E7C
	b _08072740
	.byte 0x00
	.byte 0x00
_08072720:
	.4byte 0x00000B6E
_08072724:
	.4byte gRam
_08072728:
	.4byte 0x00000B5C
_0807272C:
	.4byte 0x00000C86
_08072730:
	.4byte 0x000016C4
_08072734:
	.4byte 0x000009AC
_08072738:
	.4byte 0x000009AD
_0807273C:
	bl sub_08078708
_08072740:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08072568

	.byte 0x00
	.byte 0x00
