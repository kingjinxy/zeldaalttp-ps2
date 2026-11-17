	THUMB_FUNC_START sub_080A7B24
sub_080A7B24: @ 0x080A7B24
	push {r4-r6,lr}
	ldr r0, _080A7B48  @ =gUnknown_02000400
	ldrh r5, [r0]
	ldr r1, _080A7B4C  @ =gRam
	ldr r2, _080A7B50  @ =0x0000098E
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r6, r1, #0
	cmp r0, #6
	bls _080A7B3E
	b _080A7F9C
_080A7B3E:
	lsl r0, r0, #2
	ldr r1, _080A7B54  @ =0x080A7B58
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_080A7B48:
	.4byte gUnknown_02000400
_080A7B4C:
	.4byte gRam
_080A7B50:
	.4byte 0x0000098E
_080A7B54:
	.4byte _080A7B54+0x4
	.4byte _080A7B74
	.4byte _080A7F9C
	.4byte _080A7F9C
	.4byte _080A7C38
	.4byte _080A7D20
	.4byte _080A7DE4
	.4byte _080A7EBC
_080A7B74:
	lsl r1, r5, #1
	ldr r3, _080A7C08  @ =gUnknown_02000402
	add r2, r1, r3
	ldr r4, _080A7C0C  @ =0x00009246
	add r0, r4, #0
	strh r0, [r2]
	ldr r0, _080A7C10  @ =gUnknown_02000404
	add r2, r1, r0
	mov r0, #4
	strh r0, [r2]
	add r3, r3, #4
	add r2, r1, r3
	ldr r4, _080A7C14  @ =0x000081F4
	add r0, r4, #0
	strh r0, [r2]
	ldr r0, _080A7C18  @ =gUnknown_02000408
	add r2, r1, r0
	ldr r3, _080A7C1C  @ =0x000081F5
	add r0, r3, #0
	strh r0, [r2]
	ldr r4, _080A7C20  @ =gUnknown_0200040A
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	ldr r3, _080A7C24  @ =0x00009586
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	mov r0, #5
	strh r0, [r2]
	ldr r0, _080A7C28  @ =gUnknown_02000412
	add r2, r1, r0
	ldr r3, _080A7C2C  @ =0x000081F8
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #4
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r1, r1, r4
	ldr r2, _080A7C30  @ =0x0000FFFF
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _080A7C34  @ =gUnknown_02000400
	add r0, r5, #0
	add r0, r0, #13
	b _080A800E
	.byte 0x00
	.byte 0x00
_080A7C08:
	.4byte gUnknown_02000402
_080A7C0C:
	.4byte 0x00009246
_080A7C10:
	.4byte gUnknown_02000404
_080A7C14:
	.4byte 0x000081F4
_080A7C18:
	.4byte gUnknown_02000408
_080A7C1C:
	.4byte 0x000081F5
_080A7C20:
	.4byte gUnknown_0200040A
_080A7C24:
	.4byte 0x00009586
_080A7C28:
	.4byte gUnknown_02000412
_080A7C2C:
	.4byte 0x000081F8
_080A7C30:
	.4byte 0x0000FFFF
_080A7C34:
	.4byte gUnknown_02000400
_080A7C38:
	lsl r1, r5, #1
	ldr r3, _080A7CD4  @ =gUnknown_02000402
	add r2, r1, r3
	ldr r4, _080A7CD8  @ =0x00009246
	add r0, r4, #0
	strh r0, [r2]
	ldr r2, _080A7CDC  @ =gUnknown_02000404
	add r0, r1, r2
	mov r3, #5
	strh r3, [r0]
	ldr r4, _080A7CE0  @ =gUnknown_02000406
	add r2, r1, r4
	ldr r4, _080A7CE4  @ =0x000081F0
	add r0, r4, #0
	strh r0, [r2]
	ldr r0, _080A7CE8  @ =gUnknown_02000408
	add r2, r1, r0
	add r4, r4, #1
	add r0, r4, #0
	strh r0, [r2]
	ldr r0, _080A7CEC  @ =gUnknown_0200040A
	add r2, r1, r0
	add r4, r4, #1
	add r0, r4, #0
	strh r0, [r2]
	ldr r0, _080A7CF0  @ =gUnknown_0200040C
	add r2, r1, r0
	add r4, r4, #1
	add r0, r4, #0
	strh r0, [r2]
	ldr r0, _080A7CF4  @ =gUnknown_0200040E
	add r2, r1, r0
	add r4, r4, #1
	add r0, r4, #0
	strh r0, [r2]
	ldr r0, _080A7CF8  @ =gUnknown_02000410
	add r2, r1, r0
	ldr r4, _080A7CFC  @ =0x00009586
	add r0, r4, #0
	strh r0, [r2]
	ldr r2, _080A7D00  @ =gUnknown_02000412
	add r0, r1, r2
	strh r3, [r0]
	ldr r3, _080A7D04  @ =gUnknown_02000414
	add r2, r1, r3
	ldr r4, _080A7D08  @ =0x000081F5
	add r0, r4, #0
	strh r0, [r2]
	ldr r0, _080A7D0C  @ =gUnknown_02000416
	add r2, r1, r0
	ldr r3, _080A7D10  @ =0x000081F6
	add r0, r3, #0
	strh r0, [r2]
	ldr r4, _080A7D14  @ =gUnknown_02000418
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r1, r1, r4
	ldr r2, _080A7D18  @ =0x0000FFFF
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _080A7D1C  @ =gUnknown_02000400
	add r0, r5, #0
	add r0, r0, #14
	b _080A800E
	.byte 0x00
	.byte 0x00
_080A7CD4:
	.4byte gUnknown_02000402
_080A7CD8:
	.4byte 0x00009246
_080A7CDC:
	.4byte gUnknown_02000404
_080A7CE0:
	.4byte gUnknown_02000406
_080A7CE4:
	.4byte 0x000081F0
_080A7CE8:
	.4byte gUnknown_02000408
_080A7CEC:
	.4byte gUnknown_0200040A
_080A7CF0:
	.4byte gUnknown_0200040C
_080A7CF4:
	.4byte gUnknown_0200040E
_080A7CF8:
	.4byte gUnknown_02000410
_080A7CFC:
	.4byte 0x00009586
_080A7D00:
	.4byte gUnknown_02000412
_080A7D04:
	.4byte gUnknown_02000414
_080A7D08:
	.4byte 0x000081F5
_080A7D0C:
	.4byte gUnknown_02000416
_080A7D10:
	.4byte 0x000081F6
_080A7D14:
	.4byte gUnknown_02000418
_080A7D18:
	.4byte 0x0000FFFF
_080A7D1C:
	.4byte gUnknown_02000400
_080A7D20:
	lsl r1, r5, #1
	ldr r3, _080A7DB4  @ =gUnknown_02000402
	add r2, r1, r3
	ldr r4, _080A7DB8  @ =0x00009246
	add r0, r4, #0
	strh r0, [r2]
	ldr r0, _080A7DBC  @ =gUnknown_02000404
	add r2, r1, r0
	mov r0, #4
	strh r0, [r2]
	add r3, r3, #4
	add r2, r1, r3
	ldr r4, _080A7DC0  @ =0x000081F0
	add r0, r4, #0
	strh r0, [r2]
	ldr r0, _080A7DC4  @ =gUnknown_02000408
	add r2, r1, r0
	ldr r3, _080A7DC8  @ =0x000081F1
	add r0, r3, #0
	strh r0, [r2]
	ldr r4, _080A7DCC  @ =gUnknown_0200040A
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	ldr r3, _080A7DD0  @ =0x00009586
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	mov r0, #5
	strh r0, [r2]
	ldr r0, _080A7DD4  @ =gUnknown_02000412
	add r2, r1, r0
	ldr r3, _080A7DD8  @ =0x000081F4
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #4
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r1, r1, r4
	ldr r2, _080A7DDC  @ =0x0000FFFF
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _080A7DE0  @ =gUnknown_02000400
	add r0, r5, #0
	add r0, r0, #13
	b _080A800E
	.byte 0x00
	.byte 0x00
_080A7DB4:
	.4byte gUnknown_02000402
_080A7DB8:
	.4byte 0x00009246
_080A7DBC:
	.4byte gUnknown_02000404
_080A7DC0:
	.4byte 0x000081F0
_080A7DC4:
	.4byte gUnknown_02000408
_080A7DC8:
	.4byte 0x000081F1
_080A7DCC:
	.4byte gUnknown_0200040A
_080A7DD0:
	.4byte 0x00009586
_080A7DD4:
	.4byte gUnknown_02000412
_080A7DD8:
	.4byte 0x000081F4
_080A7DDC:
	.4byte 0x0000FFFF
_080A7DE0:
	.4byte gUnknown_02000400
_080A7DE4:
	lsl r1, r5, #1
	ldr r3, _080A7E8C  @ =gUnknown_02000402
	add r2, r1, r3
	ldr r4, _080A7E90  @ =0x00009246
	add r0, r4, #0
	strh r0, [r2]
	ldr r0, _080A7E94  @ =gUnknown_02000404
	add r2, r1, r0
	mov r0, #6
	strh r0, [r2]
	add r3, r3, #4
	add r2, r1, r3
	ldr r4, _080A7E98  @ =0x000081F0
	add r0, r4, #0
	strh r0, [r2]
	ldr r0, _080A7E9C  @ =gUnknown_02000408
	add r2, r1, r0
	ldr r3, _080A7EA0  @ =0x000081F1
	add r0, r3, #0
	strh r0, [r2]
	ldr r4, _080A7EA4  @ =gUnknown_0200040A
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	ldr r3, _080A7EA8  @ =0x00009586
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	mov r0, #5
	strh r0, [r2]
	ldr r0, _080A7EAC  @ =gUnknown_02000416
	add r2, r1, r0
	ldr r3, _080A7EB0  @ =0x000081F6
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #4
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r1, r1, r4
	ldr r2, _080A7EB4  @ =0x0000FFFF
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _080A7EB8  @ =gUnknown_02000400
	add r0, r5, #0
	add r0, r0, #15
	b _080A800E
	.byte 0x00
	.byte 0x00
_080A7E8C:
	.4byte gUnknown_02000402
_080A7E90:
	.4byte 0x00009246
_080A7E94:
	.4byte gUnknown_02000404
_080A7E98:
	.4byte 0x000081F0
_080A7E9C:
	.4byte gUnknown_02000408
_080A7EA0:
	.4byte 0x000081F1
_080A7EA4:
	.4byte gUnknown_0200040A
_080A7EA8:
	.4byte 0x00009586
_080A7EAC:
	.4byte gUnknown_02000416
_080A7EB0:
	.4byte 0x000081F6
_080A7EB4:
	.4byte 0x0000FFFF
_080A7EB8:
	.4byte gUnknown_02000400
_080A7EBC:
	lsl r1, r5, #1
	ldr r3, _080A7F6C  @ =gUnknown_02000402
	add r2, r1, r3
	ldr r4, _080A7F70  @ =0x00009246
	add r0, r4, #0
	strh r0, [r2]
	ldr r0, _080A7F74  @ =gUnknown_02000404
	add r2, r1, r0
	mov r0, #7
	strh r0, [r2]
	add r3, r3, #4
	add r2, r1, r3
	ldr r4, _080A7F78  @ =0x000081F0
	add r0, r4, #0
	strh r0, [r2]
	ldr r0, _080A7F7C  @ =gUnknown_02000408
	add r2, r1, r0
	ldr r3, _080A7F80  @ =0x000081F1
	add r0, r3, #0
	strh r0, [r2]
	ldr r4, _080A7F84  @ =gUnknown_0200040A
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	ldr r3, _080A7F88  @ =0x00009586
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	mov r0, #5
	strh r0, [r2]
	ldr r0, _080A7F8C  @ =gUnknown_02000418
	add r2, r1, r0
	ldr r3, _080A7F90  @ =0x000081F7
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #4
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r1, r1, r4
	ldr r2, _080A7F94  @ =0x0000FFFF
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _080A7F98  @ =gUnknown_02000400
	add r0, r5, #0
	add r0, r0, #16
	b _080A800E
_080A7F6C:
	.4byte gUnknown_02000402
_080A7F70:
	.4byte 0x00009246
_080A7F74:
	.4byte gUnknown_02000404
_080A7F78:
	.4byte 0x000081F0
_080A7F7C:
	.4byte gUnknown_02000408
_080A7F80:
	.4byte 0x000081F1
_080A7F84:
	.4byte gUnknown_0200040A
_080A7F88:
	.4byte 0x00009586
_080A7F8C:
	.4byte gUnknown_02000418
_080A7F90:
	.4byte 0x000081F7
_080A7F94:
	.4byte 0x0000FFFF
_080A7F98:
	.4byte gUnknown_02000400
_080A7F9C:
	lsl r1, r5, #1
	ldr r3, _080A808C  @ =gUnknown_02000402
	add r2, r1, r3
	ldr r4, _080A8090  @ =0x00009246
	add r0, r4, #0
	strh r0, [r2]
	ldr r0, _080A8094  @ =gUnknown_02000404
	add r2, r1, r0
	mov r0, #4
	strh r0, [r2]
	add r3, r3, #4
	add r2, r1, r3
	ldr r4, _080A8098  @ =0x000081F8
	add r0, r4, #0
	strh r0, [r2]
	ldr r0, _080A809C  @ =gUnknown_02000408
	add r2, r1, r0
	ldr r3, _080A80A0  @ =0x000081F9
	add r0, r3, #0
	strh r0, [r2]
	ldr r4, _080A80A4  @ =gUnknown_0200040A
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	add r3, r3, #1
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	ldr r3, _080A80A8  @ =0x00009586
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r2, r1, r4
	mov r0, #2
	strh r0, [r2]
	ldr r0, _080A80AC  @ =gUnknown_02000412
	add r2, r1, r0
	ldr r3, _080A80B0  @ =0x00008153
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #4
	add r2, r1, r4
	add r3, r3, #11
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #2
	add r1, r1, r4
	ldr r2, _080A80B4  @ =0x0000FFFF
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _080A80B8  @ =gUnknown_02000400
	add r0, r5, #0
	add r0, r0, #10
_080A800E:
	strh r0, [r1]
	ldr r0, _080A80B8  @ =gUnknown_02000400
	ldrh r5, [r0]
	lsl r2, r5, #1
	ldr r3, _080A808C  @ =gUnknown_02000402
	add r1, r2, r3
	ldr r4, _080A80BC  @ =0x000095AC
	add r0, r4, #0
	strh r0, [r1]
	ldr r0, _080A8094  @ =gUnknown_02000404
	add r1, r2, r0
	mov r0, #8
	strh r0, [r1]
	mov r4, #0
	ldr r1, _080A80C0  @ =gUnknown_0816BCA0
	ldr r3, _080A80C4  @ =0x0000098E
	add r0, r6, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldr r0, _080A80C8  @ =gUnknown_02000406
	add r2, r2, r0
_080A8040:
	ldrh r0, [r1]
	strh r0, [r2]
	add r1, r1, #2
	add r2, r2, #2
	add r4, r4, #1
	cmp r4, #8
	bne _080A8040
	lsl r0, r5, #1
	ldr r1, _080A80CC  @ =gUnknown_02000416
	add r0, r0, r1
	ldr r2, _080A80B4  @ =0x0000FFFF
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, _080A80B8  @ =gUnknown_02000400
	add r0, r5, #0
	add r0, r0, #10
	strh r0, [r1]
	ldrh r5, [r1]
	lsl r1, r5, #1
	ldr r3, _080A8094  @ =gUnknown_02000404
	add r0, r1, r3
	strh r4, [r0]
	mov r4, #0
	add r2, r6, #0
	ldr r3, _080A80D0  @ =0x00001651
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A80DC
	ldr r0, _080A808C  @ =gUnknown_02000402
	add r1, r1, r0
	ldr r3, _080A80D4  @ =0x0000942C
	add r0, r3, #0
	strh r0, [r1]
	ldr r1, _080A80D8  @ =gUnknown_0816BE14
	ldr r3, _080A80C4  @ =0x0000098E
	add r0, r2, r3
	b _080A811C
_080A808C:
	.4byte gUnknown_02000402
_080A8090:
	.4byte 0x00009246
_080A8094:
	.4byte gUnknown_02000404
_080A8098:
	.4byte 0x000081F8
_080A809C:
	.4byte gUnknown_02000408
_080A80A0:
	.4byte 0x000081F9
_080A80A4:
	.4byte gUnknown_0200040A
_080A80A8:
	.4byte 0x00009586
_080A80AC:
	.4byte gUnknown_02000412
_080A80B0:
	.4byte 0x00008153
_080A80B4:
	.4byte 0x0000FFFF
_080A80B8:
	.4byte gUnknown_02000400
_080A80BC:
	.4byte 0x000095AC
_080A80C0:
	.4byte gUnknown_0816BCA0
_080A80C4:
	.4byte 0x0000098E
_080A80C8:
	.4byte gUnknown_02000406
_080A80CC:
	.4byte gUnknown_02000416
_080A80D0:
	.4byte 0x00001651
_080A80D4:
	.4byte 0x0000942C
_080A80D8:
	.4byte gUnknown_0816BE14
_080A80DC:
	ldr r3, _080A80F8  @ =0x0000165E
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080A810C
	ldr r0, _080A80FC  @ =gUnknown_02000402
	add r1, r1, r0
	ldr r3, _080A8100  @ =0x0000942C
	add r0, r3, #0
	strh r0, [r1]
	ldr r1, _080A8104  @ =gUnknown_0816BD1C
	ldr r3, _080A8108  @ =0x0000098E
	add r0, r2, r3
	b _080A811C
_080A80F8:
	.4byte 0x0000165E
_080A80FC:
	.4byte gUnknown_02000402
_080A8100:
	.4byte 0x0000942C
_080A8104:
	.4byte gUnknown_0816BD1C
_080A8108:
	.4byte 0x0000098E
_080A810C:
	ldr r0, _080A8158  @ =gUnknown_02000402
	add r1, r1, r0
	ldr r2, _080A815C  @ =0x000093EC
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _080A8160  @ =gUnknown_0816BD98
	ldr r3, _080A8164  @ =0x0000098E
	add r0, r6, r3
_080A811C:
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	lsl r2, r5, #1
	add r5, r5, #10
	lsl r0, r4, #1
	ldr r3, _080A8168  @ =gUnknown_02000406
	add r0, r0, r3
	add r3, r0, r2
_080A8134:
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	add r3, r3, #2
	add r4, r4, #1
	cmp r4, #8
	bne _080A8134
	ldr r4, _080A816C  @ =gUnknown_02000416
	add r0, r2, r4
	ldr r2, _080A8170  @ =0x0000FFFF
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _080A8174  @ =gUnknown_02000400
	strh r5, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A8158:
	.4byte gUnknown_02000402
_080A815C:
	.4byte 0x000093EC
_080A8160:
	.4byte gUnknown_0816BD98
_080A8164:
	.4byte 0x0000098E
_080A8168:
	.4byte gUnknown_02000406
_080A816C:
	.4byte gUnknown_02000416
_080A8170:
	.4byte 0x0000FFFF
_080A8174:
	.4byte gUnknown_02000400
	THUMB_FUNC_END sub_080A7B24

