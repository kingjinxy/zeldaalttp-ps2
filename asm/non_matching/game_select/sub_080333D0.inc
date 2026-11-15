	THUMB_FUNC_START sub_080333D0
sub_080333D0: @ 0x080333D0
	push {r4-r7,lr}
	sub sp, sp, #4
	bl sub_0800EEA8
	ldr r7, _080333E8  @ =gUnknown_02016D60
	str r0, [r7, #8]
	cmp r0, #0
	bne _080333EC
	mov r0, #3
	strb r0, [r7]
	b _08033446
	.byte 0x00
	.byte 0x00
_080333E8:
	.4byte gUnknown_02016D60
_080333EC:
	mov r5, #0
	str r5, [sp]
	ldr r4, _08033450  @ =gUnknown_0202DA10
	ldr r2, _08033454  @ =0x01000040
	mov r0, sp
	add r1, r4, #0
	bl CpuFastSet
	str r4, [r7, #12]
	add r4, r4, #128
	str r4, [r7, #16]
	str r5, [r7, #20]
	mov r6, #1
	str r6, [r7, #24]
	str r5, [r7, #28]
	ldr r0, _08033458  @ =gUnknown_08427A64
	ldr r2, _0803345C  @ =0x04000006
	add r1, r4, #0
	bl CpuSet
	ldr r0, [r7, #12]
	mov r1, #129
	lsl r1, r1, #3
	bl sub_0800ED7C
	ldr r1, [r7, #8]
	ldr r0, [r7, #16]
	ldrb r0, [r0, #23]
	strb r0, [r1, #2]
	ldr r1, [r7, #8]
	ldr r0, [r7, #16]
	ldr r0, [r0, #8]
	str r0, [r1, #8]
	ldr r1, [r7, #8]
	ldr r0, [r7, #16]
	ldrb r0, [r0, #22]
	strb r0, [r1, #4]
	ldr r1, _08033460  @ =gUnknown_030004A0
	strh r5, [r1, #10]
	mov r0, #64
	strh r0, [r1, #12]
	strb r6, [r7]
	strh r5, [r7, #4]
	mov r0, #128
	strh r0, [r7, #6]
_08033446:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08033450:
	.4byte gUnknown_0202DA10
_08033454:
	.4byte 0x01000040
_08033458:
	.4byte gUnknown_08427A64
_0803345C:
	.4byte 0x04000006
_08033460:
	.4byte gUnknown_030004A0
	THUMB_FUNC_END sub_080333D0

