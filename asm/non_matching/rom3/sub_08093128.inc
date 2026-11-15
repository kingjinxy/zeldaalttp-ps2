	THUMB_FUNC_START sub_08093128
sub_08093128: @ 0x08093128
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r2, _080931E8  @ =gRam
	ldr r3, _080931EC  @ =0x000016C5
	add r1, r2, r3
	ldrb r3, [r1]
	ldr r4, _080931F0  @ =0x000016D9
	add r1, r2, r4
	strb r3, [r1]
	ldr r3, _080931F4  @ =0x000016C4
	add r1, r2, r3
	ldrb r3, [r1]
	sub r4, r4, #1
	add r1, r2, r4
	strb r3, [r1]
	mov r1, #7
	mov r8, r1
	add r4, r2, #0
	ldr r2, _080931F8  @ =gUnknown_08167C9C
	mov r10, r2
	mov r6, #0
	lsr r0, r0, #25
	mov r9, r0
_08093160:
	lsr r1, r7, #1
	lsl r1, r1, #1
	add r1, r1, r10
	ldr r3, _080931F4  @ =0x000016C4
	add r5, r4, r3
	ldrh r0, [r5]
	ldrh r1, [r1]
	add r0, r0, r1
	strh r0, [r5]
	ldr r1, _080931FC  @ =0x00001726
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #25
	lsr r0, r0, #24
	bl sub_0809EB58
	ldr r2, _08093200  @ =0x000017D2
	add r0, r4, r2
	ldrb r1, [r0]
	ldr r3, _08093204  @ =0x000017EC
	add r0, r4, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	add r2, r2, #22
	add r0, r4, r2
	ldrb r0, [r0]
	orr r1, r1, r0
	sub r3, r3, #28
	add r0, r4, r3
	ldrh r2, [r0]
	orr r1, r1, r2
	sub r3, r3, #188
	add r0, r4, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	mov r0, #7
	and r1, r1, r0
	cmp r1, #7
	bne _08093218
	and r1, r1, r2
	cmp r1, #7
	bne _08093236
	ldr r0, _08093208  @ =0x000017D4
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r2, _0809320C  @ =0x00001702
	add r1, r4, r2
	mov r0, #2
	strb r0, [r1]
	sub r3, r3, #72
	add r0, r4, r3
	ldrb r1, [r0]
	add r2, r2, #204
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #132
	add r0, r4, r3
	strb r6, [r0]
	ldr r1, _08093210  @ =0x00001719
	add r0, r4, r1
	strb r6, [r0]
	ldr r2, _08093214  @ =gUnknown_03003A38
	strb r6, [r2]
	bl sub_08092B0C
	b _08093236
	.byte 0x00
	.byte 0x00
_080931E8:
	.4byte gRam
_080931EC:
	.4byte 0x000016C5
_080931F0:
	.4byte 0x000016D9
_080931F4:
	.4byte 0x000016C4
_080931F8:
	.4byte gUnknown_08167C9C
_080931FC:
	.4byte 0x00001726
_08093200:
	.4byte 0x000017D2
_08093204:
	.4byte 0x000017EC
_08093208:
	.4byte 0x000017D4
_0809320C:
	.4byte 0x00001702
_08093210:
	.4byte 0x00001719
_08093214:
	.4byte gUnknown_03003A38
_08093218:
	mov r0, r8
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	mov r8, r3
	cmp r0, #0
	bge _08093160
	ldr r0, _080932A0  @ =gUnknown_08167CA0
	mov r4, r9
	lsl r1, r4, #1
	add r1, r1, r0
	ldrh r0, [r5, #20]
	ldrh r1, [r1]
	add r0, r0, r1
	strh r0, [r5]
_08093236:
	ldr r3, _080932A4  @ =gRam
	ldr r1, _080932A8  @ =gUnknown_08167CA4
	mov r2, r9
	lsl r0, r2, #1
	add r0, r0, r1
	ldr r4, _080932AC  @ =0x000016C4
	add r2, r3, r4
	ldrh r1, [r2]
	ldrh r0, [r0]
	add r1, r1, r0
	strh r1, [r2]
	ldr r2, _080932B0  @ =0x000016D8
	add r0, r3, r2
	ldrh r0, [r0]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r0, #0
	bge _08093262
	neg r0, r1
	lsl r0, r0, #16
	lsr r1, r0, #16
_08093262:
	lsr r0, r1, #3
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _080932B4  @ =gUnknown_08167CA8
	add r0, r2, r0
	ldrb r1, [r0]
	cmp r7, #2
	beq _08093278
	neg r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
_08093278:
	ldr r4, _080932B8  @ =0x000016CE
	add r0, r3, r4
	strb r1, [r0]
	ldr r0, _080932BC  @ =gUnknown_08167CC0
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r2, _080932C0  @ =0x000017F3
	add r0, r3, r2
	strb r1, [r0]
	ldr r4, _080932C4  @ =0x000017F4
	add r0, r3, r4
	strb r1, [r0]
	mov r0, r8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
_080932A0:
	.4byte gUnknown_08167CA0
_080932A4:
	.4byte gRam
_080932A8:
	.4byte gUnknown_08167CA4
_080932AC:
	.4byte 0x000016C4
_080932B0:
	.4byte 0x000016D8
_080932B4:
	.4byte gUnknown_08167CA8
_080932B8:
	.4byte 0x000016CE
_080932BC:
	.4byte gUnknown_08167CC0
_080932C0:
	.4byte 0x000017F3
_080932C4:
	.4byte 0x000017F4
	THUMB_FUNC_END sub_08093128

