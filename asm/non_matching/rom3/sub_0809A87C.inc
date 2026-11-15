	THUMB_FUNC_START sub_0809A87C
sub_0809A87C: @ 0x0809A87C
	push {r4-r7,lr}
	ldr r3, _0809AA04  @ =gRam
	ldr r1, _0809AA08  @ =0x00001705
	add r0, r3, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _0809AA0C  @ =0x000016F8
	add r0, r3, r2
	strb r1, [r0]
	ldr r4, _0809AA10  @ =0x000016C8
	add r0, r3, r4
	strb r1, [r0]
	ldr r5, _0809AA14  @ =0x000016C9
	add r0, r3, r5
	strb r1, [r0]
	sub r2, r2, #41
	add r0, r3, r2
	strb r1, [r0]
	add r4, r4, #58
	add r0, r3, r4
	strb r1, [r0]
	ldr r5, _0809AA18  @ =0x00001805
	add r0, r3, r5
	strb r1, [r0]
	add r2, r2, #158
	add r0, r3, r2
	strb r1, [r0]
	add r4, r4, #108
	add r2, r3, r4
	mov r0, #32
	strb r0, [r2]
	add r5, r5, #8
	add r2, r3, r5
	sub r4, r4, #94
	add r0, r3, r4
	strb r1, [r0]
	sub r5, r5, #28
	add r0, r3, r5
	strb r1, [r0]
	mov r0, #1
	strb r0, [r2]
	ldr r0, _0809AA1C  @ =0x00001717
	add r2, r3, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	blt _0809A8E0
	b _0809AAAE
_0809A8E0:
	add r4, r4, #5
	add r1, r3, r4
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldrb r4, [r1]
	mov r0, #9
	strb r0, [r2]
	ldr r5, _0809AA20  @ =0x00001663
	add r0, r3, r5
	ldrb r0, [r0]
	cmp r0, #13
	beq _0809A904
	cmp r4, #1
	bne _0809A904
	ldr r1, _0809AA24  @ =0x00001787
	add r0, r3, r1
	strb r4, [r0]
_0809A904:
	cmp r4, #6
	beq _0809A90A
	b _0809AAAE
_0809A90A:
	bl sub_08093078
	ldr r6, _0809AA04  @ =gRam
	ldr r2, _0809AA28  @ =0x000009AD
	add r1, r6, r2
	mov r3, #0
	mov r0, #7
	strb r0, [r1]
	ldr r5, _0809AA2C  @ =0x00001715
	add r0, r6, r5
	strb r4, [r0]
	ldr r0, _0809AA30  @ =0x00001716
	add r1, r6, r0
	mov r0, #3
	strb r0, [r1]
	mov r2, #184
	lsl r2, r2, #5
	add r1, r6, r2
	mov r0, #12
	strb r0, [r1]
	ldr r4, _0809AA34  @ =0x00001712
	add r1, r6, r4
	mov r0, #16
	strb r0, [r1]
	sub r5, r5, #85
	add r2, r6, r5
	ldr r1, _0809AA38  @ =0x00000958
	add r0, r6, r1
	ldrb r1, [r0]
	ldrb r0, [r2]
	sub r0, r0, r1
	mov r2, #150
	lsl r2, r2, #4
	add r7, r6, r2
	strb r0, [r7]
	ldr r4, _0809AA3C  @ =0x00000961
	add r0, r6, r4
	strb r3, [r0]
	add r5, r5, #209
	add r0, r6, r5
	strb r3, [r0]
	ldr r1, _0809AA40  @ =0x00001792
	add r0, r6, r1
	strb r3, [r0]
	ldr r2, _0809AA44  @ =0x00001808
	add r0, r6, r2
	strb r3, [r0]
	ldr r4, _0809AA48  @ =0x00001794
	add r0, r6, r4
	strb r3, [r0]
	ldr r5, _0809AA4C  @ =0x000009B2
	add r0, r6, r5
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0809A9AC
	ldrh r4, [r7]
	ldr r0, _0809AA50  @ =0x000009DA
	add r5, r6, r0
	ldrh r1, [r5]
	ldr r2, _0809AA54  @ =0x000009DC
	add r0, r6, r2
	strh r1, [r0]
	bl sub_08070064
	strh r4, [r7]
	mov r4, #80
	add r1, r6, #0
	ldr r6, _0809AA58  @ =gUnknown_081676FE
	ldrh r3, [r5]
_0809A998:
	lsl r0, r4, #1
	add r0, r0, r6
	ldrh r0, [r0]
	cmp r3, r0
	beq _0809AA92
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r0, #0
	bge _0809A998
_0809A9AC:
	ldr r4, _0809AA04  @ =gRam
	ldr r5, _0809AA50  @ =0x000009DA
	add r3, r4, r5
	ldrh r2, [r3]
	ldr r1, _0809AA54  @ =0x000009DC
	add r0, r4, r1
	strh r2, [r0]
	mov r1, #255
	lsl r1, r1, #8
	and r1, r1, r2
	mov r2, #207
	lsl r2, r2, #4
	add r0, r4, r2
	ldrb r0, [r0]
	orr r0, r0, r1
	strh r0, [r3]
	sub r5, r5, #122
	add r0, r4, r5
	ldrh r2, [r0]
	add r2, r2, #16
	strh r2, [r0]
	mov r0, #182
	lsl r0, r0, #5
	add r3, r4, r0
	ldrh r0, [r3]
	ldr r5, _0809AA5C  @ =0x00001708
	add r1, r4, r5
	strh r0, [r1]
	sub r0, r0, r2
	strh r0, [r3]
	ldr r1, _0809AA4C  @ =0x000009B2
	add r0, r4, r1
	mov r5, #0
	ldrsb r5, [r0, r5]
	cmp r5, #0
	bne _0809AA8C
	ldr r2, _0809AA60  @ =0x000009C6
	add r0, r4, r2
	ldrh r0, [r0]
	cmp r0, #5
	bne _0809AA64
	bl sub_0808B3DC
	b _0809AAAE
_0809AA04:
	.4byte gRam
_0809AA08:
	.4byte 0x00001705
_0809AA0C:
	.4byte 0x000016F8
_0809AA10:
	.4byte 0x000016C8
_0809AA14:
	.4byte 0x000016C9
_0809AA18:
	.4byte 0x00001805
_0809AA1C:
	.4byte 0x00001717
_0809AA20:
	.4byte 0x00001663
_0809AA24:
	.4byte 0x00001787
_0809AA28:
	.4byte 0x000009AD
_0809AA2C:
	.4byte 0x00001715
_0809AA30:
	.4byte 0x00001716
_0809AA34:
	.4byte 0x00001712
_0809AA38:
	.4byte 0x00000958
_0809AA3C:
	.4byte 0x00000961
_0809AA40:
	.4byte 0x00001792
_0809AA44:
	.4byte 0x00001808
_0809AA48:
	.4byte 0x00001794
_0809AA4C:
	.4byte 0x000009B2
_0809AA50:
	.4byte 0x000009DA
_0809AA54:
	.4byte 0x000009DC
_0809AA58:
	.4byte gUnknown_081676FE
_0809AA5C:
	.4byte 0x00001708
_0809AA60:
	.4byte 0x000009C6
_0809AA64:
	bl sub_0808B4AC
	ldr r0, _0809AA80  @ =0x000009AC
	add r1, r4, r0
	mov r0, #17
	strb r0, [r1]
	ldr r2, _0809AA84  @ =0x000009AD
	add r1, r4, r2
	mov r0, #0
	strb r0, [r1]
	ldr r1, _0809AA88  @ =0x000009E8
	add r0, r4, r1
	strh r5, [r0]
	b _0809AAAE
_0809AA80:
	.4byte 0x000009AC
_0809AA84:
	.4byte 0x000009AD
_0809AA88:
	.4byte 0x000009E8
_0809AA8C:
	bl sub_0809E4FC
	b _0809AAAE
_0809AA92:
	ldr r2, _0809AAB4  @ =0x000009AD
	add r1, r1, r2
	mov r0, #21
	strb r0, [r1]
	ldr r1, _0809AAB8  @ =gMaxHealth
	ldrb r0, [r1]
	sub r0, r0, #8
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #167
	bls _0809AAAE
	mov r0, #0
	strb r0, [r1]
_0809AAAE:
	pop {r4-r7}
	pop {r0}
	bx r0
_0809AAB4:
	.4byte 0x000009AD
_0809AAB8:
	.4byte gMaxHealth
	THUMB_FUNC_END sub_0809A87C

