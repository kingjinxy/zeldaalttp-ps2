	.syntax unified
	THUMB_FUNC_START sub_08002900
sub_08002900: @ 0X08002900
	bl _08002424
	bl sub_080025F4
	push {r1}
	movs r1, #80
	ldrh r2, [r0, r1]
	ldr r3, [pc, #208]
	ands r2, r3
	ldr r3, [pc, #212]
	orrs r2, r3
	strh r2, [r0, r1]
	movs r2, #128
	strb r2, [r0, #31]
	ldrb r2, [r0, #29]
	movs r3, #63
	ands r2, r3
	movs r3, #128
	orrs r2, r3
	strb r2, [r0, #29]
	pop {r1}
	movs r2, #16
	b.n _08002930
	.byte 0x00
	.byte 0x00
_08002930:
	movs r3, #38
	ldrb r3, [r1, r3]
	lsls r3, r3, #25
	lsrs r3, r3, #25
	subs r3, #1
	bne.n _08002944
	push {r0, r1}
	ldr r1, [pc, #188]
	bl sub_080028AC
_08002944:
	b.n sub_08002530
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
