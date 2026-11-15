	THUMB_FUNC_START sub_08084FD0
sub_08084FD0: @ 0x08084FD0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r2, _08085014  @ =gRam
	ldr r1, _08085018  @ =0x00000B08
	add r0, r2, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r3, _0808501C  @ =0x000018B0
	add r1, r2, r3
	add r0, r0, r1
	ldrh r0, [r0]
	mov r1, #254
	and r1, r1, r0
	ldr r5, _08085020  @ =0x00000C04
	add r0, r2, r5
	ldrh r0, [r0]
	add r4, r2, #0
	cmp r0, #0
	beq _08085028
	cmp r0, #4
	beq _08085028
	cmp r1, #65
	ble _08085002
	add r0, r0, #4
_08085002:
	cmp r1, #24
	beq _0808500A
	cmp r1, #68
	bne _0808500C
_0808500A:
	add r0, r0, #2
_0808500C:
	ldr r1, _08085024  @ =gUnknown_0816795C
	sub r0, r0, #2
	asr r0, r0, #1
	b _08085062
_08085014:
	.4byte gRam
_08085018:
	.4byte 0x00000B08
_0808501C:
	.4byte 0x000018B0
_08085020:
	.4byte 0x00000C04
_08085024:
	.4byte gUnknown_0816795C
_08085028:
	ldr r1, _080850F8  @ =0x00000B08
	add r0, r4, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r2, _080850FC  @ =0x000018B0
	add r1, r4, r2
	add r0, r0, r1
	ldrh r0, [r0]
	mov r3, #254
	and r3, r3, r0
	ldr r5, _08085100  @ =0x00000BFE
	add r2, r4, r5
	ldr r1, _08085104  @ =gUnknown_081676B2
	ldr r5, _08085108  @ =0x00000968
	add r0, r4, r5
	mov r5, #0
	ldrsh r0, [r0, r5]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _0808505E
	ldr r0, _0808510C  @ =gUnknown_081677FC
	add r0, r3, r0
	ldrh r3, [r0]
_0808505E:
	ldr r1, _08085110  @ =gUnknown_08167A5C
	lsr r0, r3, #1
_08085062:
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r5, [r0]
	ldr r1, _080850F8  @ =0x00000B08
	add r0, r4, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r2, _08085114  @ =0x000018D0
	add r1, r4, r2
	add r0, r0, r1
	ldrh r6, [r0]
	ldr r3, _08085118  @ =0x0000097C
	add r1, r4, r3
	mov r0, #4
	strh r0, [r1]
	ldr r7, _0808511C  @ =gUnknown_02018000
	mov r8, r1
_08085084:
	add r0, r6, #0
	add r0, r0, #128
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r1, [r5]
	strh r1, [r0]
	add r5, r5, #2
	mov r1, #128
	lsl r1, r1, #1
	add r0, r6, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r1, [r5]
	strh r1, [r0]
	add r5, r5, #2
	mov r2, #192
	lsl r2, r2, #1
	add r4, r6, r2
	add r0, r4, #0
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r1, [r5]
	strh r1, [r0]
	ldr r0, _08085120  @ =0x00001FFF
	and r4, r4, r0
	add r0, r4, #0
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	ldr r3, _08085124  @ =gUnknown_0201C000
	add r0, r0, r3
	ldrh r1, [r5]
	strh r1, [r0]
	add r5, r5, #2
	add r6, r6, #2
	mov r1, r8
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08085084
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080850F8:
	.4byte 0x00000B08
_080850FC:
	.4byte 0x000018B0
_08085100:
	.4byte 0x00000BFE
_08085104:
	.4byte gUnknown_081676B2
_08085108:
	.4byte 0x00000968
_0808510C:
	.4byte gUnknown_081677FC
_08085110:
	.4byte gUnknown_08167A5C
_08085114:
	.4byte 0x000018D0
_08085118:
	.4byte 0x0000097C
_0808511C:
	.4byte gUnknown_02018000
_08085120:
	.4byte 0x00001FFF
_08085124:
	.4byte gUnknown_0201C000
	THUMB_FUNC_END sub_08084FD0

