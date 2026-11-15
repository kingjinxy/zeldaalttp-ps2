	THUMB_FUNC_START sub_08083D64
sub_08083D64: @ 0x08083D64
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r10, r0
	ldr r4, _08083E28  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r7, r4, r0
	ldr r0, _08083E2C  @ =0x00002727
	strh r0, [r7]
	mov r2, r10
	lsl r1, r2, #1
	ldr r3, _08083E30  @ =0x00000C52
	add r0, r4, r3
	add r6, r1, r0
	mov r1, #0
	ldrsh r0, [r6, r1]
	cmp r0, #0
	bge _08083D92
	mov r0, #0
	strh r0, [r7]
_08083D92:
	ldrh r1, [r6]
	ldr r2, _08083E34  @ =0x00007FFF
	mov r8, r2
	mov r0, r8
	and r0, r0, r1
	lsr r0, r0, #1
	ldr r3, _08083E38  @ =gUnknown_0200CBA0
	add r2, r0, r3
	ldrb r1, [r7]
	strb r1, [r2]
	ldr r1, _08083E3C  @ =gUnknown_0200CBA1
	add r2, r0, r1
	ldrb r1, [r7]
	strb r1, [r2]
	ldr r2, _08083E40  @ =gUnknown_0200CBE0
	add r3, r0, r2
	ldr r1, _08083E44  @ =0x00000961
	add r2, r4, r1
	ldrb r1, [r2]
	strb r1, [r3]
	ldr r3, _08083E48  @ =gUnknown_0200CBE1
	add r0, r0, r3
	ldrb r1, [r2]
	strb r1, [r0]
	ldr r0, _08083E4C  @ =gUnknown_02000400
	ldrh r0, [r0]
	mov r9, r0
	ldrh r1, [r6]
	mov r0, #128
	lsl r0, r0, #6
	and r0, r0, r1
	cmp r0, #0
	beq _08083E68
	ldr r4, _08083E50  @ =0x00001FFF
	and r4, r4, r1
	add r0, r4, #0
	bl sub_08080380
	strh r0, [r7]
	mov r1, r9
	lsl r5, r1, #1
	ldr r2, _08083E54  @ =gUnknown_02000402
	add r1, r5, r2
	ldr r3, _08083E58  @ =0xFFFFA000
	add r6, r3, #0
	add r0, r0, r6
	strh r0, [r1]
	add r0, r4, #0
	add r0, r0, #128
	bl sub_08080380
	strh r0, [r7]
	ldr r2, _08083E5C  @ =gUnknown_02000408
	add r1, r5, r2
	add r0, r0, r6
	strh r0, [r1]
	add r0, r4, #2
	bl sub_08080380
	strh r0, [r7]
	ldr r3, _08083E60  @ =gUnknown_0200040E
	add r1, r5, r3
	add r0, r0, r6
	strh r0, [r1]
	add r4, r4, #130
	add r0, r4, #0
	bl sub_08080380
	strh r0, [r7]
	ldr r2, _08083E64  @ =gUnknown_02000414
	add r1, r5, r2
	add r0, r0, r6
	strh r0, [r1]
	b _08083EC6
	.byte 0x00
	.byte 0x00
_08083E28:
	.4byte gRam
_08083E2C:
	.4byte 0x00002727
_08083E30:
	.4byte 0x00000C52
_08083E34:
	.4byte 0x00007FFF
_08083E38:
	.4byte gUnknown_0200CBA0
_08083E3C:
	.4byte gUnknown_0200CBA1
_08083E40:
	.4byte gUnknown_0200CBE0
_08083E44:
	.4byte 0x00000961
_08083E48:
	.4byte gUnknown_0200CBE1
_08083E4C:
	.4byte gUnknown_02000400
_08083E50:
	.4byte 0x00001FFF
_08083E54:
	.4byte gUnknown_02000402
_08083E58:
	.4byte 0xFFFFA000
_08083E5C:
	.4byte gUnknown_02000408
_08083E60:
	.4byte gUnknown_0200040E
_08083E64:
	.4byte gUnknown_02000414
_08083E68:
	mov r0, r8
	and r0, r0, r1
	bl sub_08080380
	strh r0, [r7]
	mov r3, r9
	lsl r4, r3, #1
	ldr r2, _08083F94  @ =gUnknown_02000402
	add r1, r4, r2
	ldr r3, _08083F98  @ =0xFFFFC000
	add r5, r3, #0
	add r0, r0, r5
	strh r0, [r1]
	ldrh r1, [r6]
	mov r0, r8
	and r0, r0, r1
	add r0, r0, #128
	bl sub_08080380
	strh r0, [r7]
	ldr r2, _08083F9C  @ =gUnknown_02000408
	add r1, r4, r2
	add r0, r0, r5
	strh r0, [r1]
	ldrh r1, [r6]
	mov r0, r8
	and r0, r0, r1
	add r0, r0, #2
	bl sub_08080380
	strh r0, [r7]
	ldr r3, _08083FA0  @ =gUnknown_0200040E
	add r1, r4, r3
	add r0, r0, r5
	strh r0, [r1]
	ldrh r1, [r6]
	mov r0, r8
	and r0, r0, r1
	add r0, r0, #130
	bl sub_08080380
	strh r0, [r7]
	ldr r2, _08083FA4  @ =gUnknown_02000414
	add r1, r4, r2
	add r0, r0, r5
	strh r0, [r1]
	add r5, r4, #0
_08083EC6:
	ldr r3, _08083FA8  @ =gUnknown_02000404
	add r0, r5, r3
	mov r2, #1
	strh r2, [r0]
	ldr r0, _08083FAC  @ =gUnknown_02000406
	add r1, r5, r0
	ldr r4, _08083FB0  @ =gRam
	ldr r3, _08083FB4  @ =0x00000964
	add r0, r4, r3
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _08083FB8  @ =gUnknown_0200040A
	add r0, r5, r1
	strh r2, [r0]
	ldr r3, _08083FBC  @ =gUnknown_0200040C
	add r1, r5, r3
	ldr r3, _08083FC0  @ =0x00000968
	add r0, r4, r3
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _08083FC4  @ =gUnknown_02000410
	add r0, r5, r1
	strh r2, [r0]
	ldr r3, _08083FC8  @ =gUnknown_02000412
	add r1, r5, r3
	ldr r3, _08083FCC  @ =0x0000096C
	add r0, r4, r3
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _08083FD0  @ =gUnknown_02000416
	add r0, r5, r1
	strh r2, [r0]
	ldr r2, _08083FD4  @ =gUnknown_02000418
	add r1, r5, r2
	add r3, r3, #4
	add r0, r4, r3
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r0, _08083FD8  @ =gUnknown_0200041A
	add r1, r5, r0
	ldr r2, _08083FDC  @ =0x0000FFFF
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _08083FE0  @ =gUnknown_02000400
	mov r0, r9
	add r0, r0, #12
	strh r0, [r1]
	bl sub_08070064
	ldr r3, _08083FE4  @ =0x000016C4
	add r0, r4, r3
	ldr r2, _08083FE8  @ =0x00000952
	add r1, r4, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r3, _08083FEC  @ =0x00000504
	add r1, r4, r3
	strh r0, [r1]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r4, r2
	ldr r3, _08083FF0  @ =0x00000958
	add r2, r4, r3
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	ldr r3, _08083FF4  @ =0x00000506
	add r2, r4, r3
	strh r0, [r2]
	mov r0, #16
	bl sub_0812A324
	mov r1, r10
	lsl r0, r1, #1
	ldr r2, _08083FF8  @ =0x00000C52
	add r1, r4, r2
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r0, _08083FFC  @ =0x00007FFF
	and r0, r0, r1
	mov r3, #150
	lsl r3, r3, #4
	add r1, r4, r3
	strh r0, [r1]
	ldrb r1, [r1]
	ldr r2, _08084000  @ =0x00001732
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	ldrb r0, [r0]
	ldr r1, _08084004  @ =0x00001733
	add r4, r4, r1
	strb r0, [r4]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08083F94:
	.4byte gUnknown_02000402
_08083F98:
	.4byte 0xFFFFC000
_08083F9C:
	.4byte gUnknown_02000408
_08083FA0:
	.4byte gUnknown_0200040E
_08083FA4:
	.4byte gUnknown_02000414
_08083FA8:
	.4byte gUnknown_02000404
_08083FAC:
	.4byte gUnknown_02000406
_08083FB0:
	.4byte gRam
_08083FB4:
	.4byte 0x00000964
_08083FB8:
	.4byte gUnknown_0200040A
_08083FBC:
	.4byte gUnknown_0200040C
_08083FC0:
	.4byte 0x00000968
_08083FC4:
	.4byte gUnknown_02000410
_08083FC8:
	.4byte gUnknown_02000412
_08083FCC:
	.4byte 0x0000096C
_08083FD0:
	.4byte gUnknown_02000416
_08083FD4:
	.4byte gUnknown_02000418
_08083FD8:
	.4byte gUnknown_0200041A
_08083FDC:
	.4byte 0x0000FFFF
_08083FE0:
	.4byte gUnknown_02000400
_08083FE4:
	.4byte 0x000016C4
_08083FE8:
	.4byte 0x00000952
_08083FEC:
	.4byte 0x00000504
_08083FF0:
	.4byte 0x00000958
_08083FF4:
	.4byte 0x00000506
_08083FF8:
	.4byte 0x00000C52
_08083FFC:
	.4byte 0x00007FFF
_08084000:
	.4byte 0x00001732
_08084004:
	.4byte 0x00001733
	THUMB_FUNC_END sub_08083D64

