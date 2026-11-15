	THUMB_FUNC_START sub_080A97F8
sub_080A97F8: @ 0x080A97F8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r0, _080A9B3C  @ =gRam
	ldr r2, _080A9B40  @ =0x00000AB2
	add r1, r0, r2
	ldrb r1, [r1]
	cmp r1, #255
	beq _080A9812
	b _080A99D4
_080A9812:
	ldr r0, _080A9B44  @ =gHeartPieces
	ldrb r0, [r0]
	ldr r3, _080A9B3C  @ =gRam
	ldr r6, _080A9B48  @ =0x00000964
	add r3, r3, r6
	mov r9, r3
	strh r0, [r3]
	ldr r0, _080A9B4C  @ =gUnknown_0816BB78
	ldr r4, _080A9B50  @ =0x000016AE
	ldr r7, _080A9B54  @ =gUnknown_02000400
	ldrh r5, [r7]
	mov r2, #0
	ldrsh r1, [r3, r2]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r6, _080A9B58  @ =gUnknown_02000402
	add r3, r2, r6
	ldr r0, _080A9B5C  @ =0xFFFF8000
	mov r8, r0
	mov r6, r8
	add r0, r6, r4
	strh r0, [r3]
	ldr r3, _080A9B60  @ =gUnknown_02000404
	add r0, r2, r3
	mov r6, #2
	mov r10, r6
	strh r6, [r0]
	ldr r0, _080A9B64  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r6, _080A9B68  @ =gUnknown_02000408
	add r3, r2, r6
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A9B6C  @ =gUnknown_0200040A
	add r0, r2, r3
	ldr r3, _080A9B70  @ =0xFFFF8040
	add r6, r3, #0
	add r4, r6, r4
	strh r4, [r0]
	ldr r3, _080A9B74  @ =gUnknown_0200040C
	add r0, r2, r3
	mov r3, r10
	strh r3, [r0]
	ldr r0, _080A9B78  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A9B7C  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A9B80  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A9B84  @ =0x0000FFFF
	strh r3, [r2]
	add r5, r5, #8
	strh r5, [r7]
	ldr r0, _080A9B3C  @ =gRam
	ldr r1, _080A9B88  @ =0x000016B4
	add r0, r0, r1
	mov r12, r0
	ldrb r0, [r0]
	mov r2, r9
	strh r0, [r2]
	ldr r0, _080A9B8C  @ =gUnknown_0816BBE0
	ldr r5, _080A9B90  @ =0x000016B6
	ldrh r4, [r7]
	mov r3, #0
	ldrsh r1, [r2, r3]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r4, #1
	ldr r3, _080A9B58  @ =gUnknown_02000402
	add r0, r2, r3
	add r8, r8, r5
	mov r3, r8
	strh r3, [r0]
	ldr r3, _080A9B60  @ =gUnknown_02000404
	add r0, r2, r3
	mov r3, r10
	strh r3, [r0]
	ldr r0, _080A9B64  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A9B68  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A9B6C  @ =gUnknown_0200040A
	add r0, r2, r3
	add r6, r6, r5
	strh r6, [r0]
	ldr r6, _080A9B74  @ =gUnknown_0200040C
	add r0, r2, r6
	mov r3, r10
	strh r3, [r0]
	add r6, r6, #2
	add r3, r2, r6
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A9B7C  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A9B80  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A9B84  @ =0x0000FFFF
	strh r3, [r2]
	add r4, r4, #8
	strh r4, [r7]
	mov r6, r12
	ldrb r0, [r6]
	cmp r0, #0
	beq _080A99D4
	ldrh r4, [r7]
	lsl r1, r4, #1
	ldr r0, _080A9B58  @ =gUnknown_02000402
	add r2, r1, r0
	ldr r3, _080A9B94  @ =0x00009674
	add r0, r3, #0
	strh r0, [r2]
	ldr r6, _080A9B60  @ =gUnknown_02000404
	add r0, r1, r6
	mov r5, #4
	strh r5, [r0]
	ldr r0, _080A9B64  @ =gUnknown_02000406
	add r2, r1, r0
	ldr r3, _080A9B98  @ =0x0000E12A
	add r0, r3, #0
	strh r0, [r2]
	add r6, r6, #4
	add r2, r1, r6
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r6, r6, #2
	add r2, r1, r6
	ldr r3, _080A9B9C  @ =0x0000E52B
	add r0, r3, #0
	strh r0, [r2]
	add r6, r6, #2
	add r2, r1, r6
	sub r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r6, r6, #2
	add r2, r1, r6
	ldr r3, _080A9BA0  @ =0x000096B4
	add r0, r3, #0
	strh r0, [r2]
	add r6, r6, #2
	add r0, r1, r6
	ldr r2, _080A9BA4  @ =0x00008002
	add r3, r2, #0
	strh r3, [r0]
	add r6, r6, #2
	add r2, r1, r6
	ldr r6, _080A9BA8  @ =0x0000E129
	add r0, r6, #0
	strh r0, [r2]
	ldr r0, _080A9BAC  @ =gUnknown_02000414
	add r2, r1, r0
	add r6, r6, #16
	add r0, r6, #0
	strh r0, [r2]
	ldr r0, _080A9BB0  @ =gUnknown_02000416
	add r2, r1, r0
	ldr r6, _080A9BB4  @ =0x000096BA
	add r0, r6, #0
	strh r0, [r2]
	ldr r2, _080A9BB8  @ =gUnknown_02000418
	add r0, r1, r2
	strh r3, [r0]
	ldr r3, _080A9BBC  @ =gUnknown_0200041A
	add r2, r1, r3
	ldr r6, _080A9BC0  @ =0x0000E529
	add r0, r6, #0
	strh r0, [r2]
	ldr r0, _080A9BC4  @ =gUnknown_0200041C
	add r2, r1, r0
	ldr r3, _080A9BC8  @ =0x0000E539
	add r0, r3, #0
	strh r0, [r2]
	ldr r6, _080A9BCC  @ =gUnknown_0200041E
	add r2, r1, r6
	ldr r3, _080A9BD0  @ =0x00009734
	add r0, r3, #0
	strh r0, [r2]
	add r6, r6, #2
	add r0, r1, r6
	strh r5, [r0]
	ldr r0, _080A9BD4  @ =gUnknown_02000422
	add r2, r1, r0
	ldr r3, _080A9BD8  @ =0x0000E13A
	add r0, r3, #0
	strh r0, [r2]
	add r6, r6, #4
	add r2, r1, r6
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r6, r6, #2
	add r2, r1, r6
	ldr r3, _080A9BDC  @ =0x0000E53B
	add r0, r3, #0
	strh r0, [r2]
	add r6, r6, #2
	add r2, r1, r6
	sub r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r6, r6, #2
	add r1, r1, r6
	ldr r0, _080A9B84  @ =0x0000FFFF
	strh r0, [r1]
	add r4, r4, #20
	strh r4, [r7]
_080A99D4:
	ldr r0, _080A9BE0  @ =gSword
	ldrb r0, [r0]
	ldr r1, _080A9B3C  @ =gRam
	ldr r2, _080A9B48  @ =0x00000964
	add r6, r1, r2
	strh r0, [r6]
	ldr r0, _080A9BE4  @ =gUnknown_0816BAA0
	ldr r4, _080A9BE8  @ =0x000015EC
	ldr r3, _080A9B54  @ =gUnknown_02000400
	mov r12, r3
	ldrh r5, [r3]
	mov r7, #0
	ldrsh r1, [r6, r7]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r0, _080A9B58  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r7, _080A9B5C  @ =0xFFFF8000
	mov r10, r7
	mov r7, r10
	add r0, r7, r4
	strh r0, [r3]
	ldr r3, _080A9B60  @ =gUnknown_02000404
	add r0, r2, r3
	mov r7, #2
	mov r8, r7
	mov r3, r8
	strh r3, [r0]
	ldr r7, _080A9B64  @ =gUnknown_02000406
	add r3, r2, r7
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A9B68  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A9B6C  @ =gUnknown_0200040A
	add r0, r2, r3
	ldr r7, _080A9B70  @ =0xFFFF8040
	mov r9, r7
	add r4, r4, r9
	strh r4, [r0]
	add r3, r3, #2
	add r0, r2, r3
	mov r7, r8
	strh r7, [r0]
	ldr r0, _080A9B78  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r7, _080A9B7C  @ =gUnknown_02000410
	add r3, r2, r7
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r0, _080A9B80  @ =gUnknown_02000412
	add r2, r2, r0
	ldr r1, _080A9B84  @ =0x0000FFFF
	add r7, r1, #0
	strh r7, [r2]
	add r5, r5, #8
	mov r2, r12
	strh r5, [r2]
	ldr r0, _080A9BEC  @ =gShield
	ldrb r0, [r0]
	strh r0, [r6]
	ldr r0, _080A9BF0  @ =gUnknown_0816BAC8
	ldr r4, _080A9BF4  @ =0x000015F2
	ldrh r5, [r2]
	mov r3, #0
	ldrsh r1, [r6, r3]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r0, _080A9B58  @ =gUnknown_02000402
	add r0, r2, r0
	str r0, [sp]
	mov r3, r10
	add r0, r3, r4
	ldr r3, [sp]
	strh r0, [r3]
	ldr r3, _080A9B60  @ =gUnknown_02000404
	add r0, r2, r3
	mov r3, r8
	strh r3, [r0]
	ldr r0, _080A9B64  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A9B68  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A9B6C  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	add r3, r3, #2
	add r0, r2, r3
	mov r3, r8
	strh r3, [r0]
	ldr r0, _080A9B78  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A9B7C  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A9B80  @ =gUnknown_02000412
	add r2, r2, r1
	strh r7, [r2]
	add r5, r5, #8
	mov r2, r12
	strh r5, [r2]
	ldr r0, _080A9BF8  @ =gArmor
	ldrb r0, [r0]
	strh r0, [r6]
	ldr r0, _080A9BFC  @ =gUnknown_0816BAE8
	ldr r5, _080A9C00  @ =0x000015F8
	ldrh r4, [r2]
	mov r3, #0
	ldrsh r1, [r6, r3]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r4, #1
	ldr r6, _080A9B58  @ =gUnknown_02000402
	add r0, r2, r6
	add r10, r10, r5
	mov r3, r10
	strh r3, [r0]
	add r6, r6, #2
	add r0, r2, r6
	mov r3, r8
	strh r3, [r0]
	add r6, r6, #2
	add r3, r2, r6
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A9B68  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A9B6C  @ =gUnknown_0200040A
	add r0, r2, r3
	add r9, r9, r5
	mov r6, r9
	strh r6, [r0]
	add r3, r3, #2
	add r0, r2, r3
	mov r6, r8
	strh r6, [r0]
	ldr r0, _080A9B78  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r6, _080A9B7C  @ =gUnknown_02000410
	add r3, r2, r6
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r0, _080A9B80  @ =gUnknown_02000412
	add r2, r2, r0
	strh r7, [r2]
	add r4, r4, #8
	mov r1, r12
	strh r4, [r1]
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080A9B3C:
	.4byte gRam
_080A9B40:
	.4byte 0x00000AB2
_080A9B44:
	.4byte gHeartPieces
_080A9B48:
	.4byte 0x00000964
_080A9B4C:
	.4byte gUnknown_0816BB78
_080A9B50:
	.4byte 0x000016AE
_080A9B54:
	.4byte gUnknown_02000400
_080A9B58:
	.4byte gUnknown_02000402
_080A9B5C:
	.4byte 0xFFFF8000
_080A9B60:
	.4byte gUnknown_02000404
_080A9B64:
	.4byte gUnknown_02000406
_080A9B68:
	.4byte gUnknown_02000408
_080A9B6C:
	.4byte gUnknown_0200040A
_080A9B70:
	.4byte 0xFFFF8040
_080A9B74:
	.4byte gUnknown_0200040C
_080A9B78:
	.4byte gUnknown_0200040E
_080A9B7C:
	.4byte gUnknown_02000410
_080A9B80:
	.4byte gUnknown_02000412
_080A9B84:
	.4byte 0x0000FFFF
_080A9B88:
	.4byte 0x000016B4
_080A9B8C:
	.4byte gUnknown_0816BBE0
_080A9B90:
	.4byte 0x000016B6
_080A9B94:
	.4byte 0x00009674
_080A9B98:
	.4byte 0x0000E12A
_080A9B9C:
	.4byte 0x0000E52B
_080A9BA0:
	.4byte 0x000096B4
_080A9BA4:
	.4byte 0x00008002
_080A9BA8:
	.4byte 0x0000E129
_080A9BAC:
	.4byte gUnknown_02000414
_080A9BB0:
	.4byte gUnknown_02000416
_080A9BB4:
	.4byte 0x000096BA
_080A9BB8:
	.4byte gUnknown_02000418
_080A9BBC:
	.4byte gUnknown_0200041A
_080A9BC0:
	.4byte 0x0000E529
_080A9BC4:
	.4byte gUnknown_0200041C
_080A9BC8:
	.4byte 0x0000E539
_080A9BCC:
	.4byte gUnknown_0200041E
_080A9BD0:
	.4byte 0x00009734
_080A9BD4:
	.4byte gUnknown_02000422
_080A9BD8:
	.4byte 0x0000E13A
_080A9BDC:
	.4byte 0x0000E53B
_080A9BE0:
	.4byte gSword
_080A9BE4:
	.4byte gUnknown_0816BAA0
_080A9BE8:
	.4byte 0x000015EC
_080A9BEC:
	.4byte gShield
_080A9BF0:
	.4byte gUnknown_0816BAC8
_080A9BF4:
	.4byte 0x000015F2
_080A9BF8:
	.4byte gArmor
_080A9BFC:
	.4byte gUnknown_0816BAE8
_080A9C00:
	.4byte 0x000015F8
	THUMB_FUNC_END sub_080A97F8

