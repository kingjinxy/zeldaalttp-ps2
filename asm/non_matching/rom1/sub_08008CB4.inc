	.syntax unified
	THUMB_FUNC_START sub_08008CB4
sub_08008CB4: @ 0X08008CB4
	ldrh r2, [r1, #50]
	strh r2, [r0, #36]
	ldrh r2, [r1, #54]
	strh r2, [r0, #38]
	pop {r4, r5, r6, r7, pc}
	.byte 0x00
	.byte 0x00
gUnknown_08008CC0:  @ a table, read through sub_08008E5C's literal pool
	.byte 0x01
	.byte 0xff
	.byte 0x00
	.byte 0x01
	.byte 0x01
	.byte 0x00
	.byte 0x00
	.byte 0x01
	.byte 0xff
	.byte 0xff
	.byte 0x01
	.byte 0x00
	.byte 0xff
	.byte 0x01
	.byte 0x00
	.byte 0x00
	.byte 0x02
	.byte 0xff
	.byte 0x01
	.byte 0xfe
	.byte 0x00
	.byte 0xff
	.byte 0xff
	.byte 0x00
	.byte 0xfe
	.byte 0x01
	.byte 0xff
	.byte 0x02
	.byte 0x00
	.byte 0x00
	.byte 0x01
	.byte 0x01
	.byte 0x02
	.byte 0xff
	.byte 0x03
	.byte 0xfe
	.byte 0xfe
	.byte 0x02
	.byte 0xff
	.byte 0x03
	.byte 0xfd
	.byte 0xff
	.byte 0xfe
	.byte 0x01
	.byte 0x01
	.byte 0xfd
	.byte 0xff
	.byte 0xfe
	.byte 0x04
	.byte 0xfe
	.byte 0x02
	.byte 0x00
	.byte 0x00
	.byte 0xfe
	.byte 0xfe
	.byte 0x04
	.byte 0xfc
	.byte 0x02
	.byte 0xfe
	.byte 0x00
	.byte 0x00
	.byte 0xfc
	.byte 0x02
	.byte 0x00
gUnknown_08008D00:
	.4byte sub_08008D0C+1  @ 0x08008D00: the handler table sub_08008D74 indexes
	.4byte sub_08008D24+1
	.4byte sub_08008D50+1
@ three Thumb handlers stored after the table at 0x08008D00 that points to them (sub_08008D74 calls them through it);
@ written as code, not bytes, so the global-state translator generates them (same bytes)
	THUMB_FUNC_START sub_08008D0C
sub_08008D0C:
	ldr r2, [pc, #392]
	ldr r2, [r2, #0]
	adds r2, #44
	ldr r3, [pc, #392]
	ldr r3, [r3, #0]
	ldrh r4, [r3, #2]
	lsrs r4, r4, #2
	strh r4, [r2, #2]
	ldrh r4, [r3, #4]
	lsrs r4, r4, #2
	strh r4, [r2, #4]
	mov pc, lr
	THUMB_FUNC_START sub_08008D24
sub_08008D24:
	ldr r2, [pc, #376]
	ldr r2, [r2, #0]
	adds r2, #44
	ldr r3, [pc, #376]
	ldr r3, [r3, #0]
	ldr r5, [r0, #44]
	ldr r6, [pc, #372]
	subs r5, r5, r6
	str r5, [r0, #44]
	lsrs r5, r5, #16
	ldrh r4, [r3, #2]
	adds r5, r5, r4
	strh r5, [r2, #2]
	ldr r6, [r0, #48]
	ldr r7, [pc, #356]
	subs r6, r6, r7
	str r6, [r0, #48]
	lsrs r6, r6, #16
	ldrh r4, [r3, #4]
	adds r6, r6, r4
	strh r6, [r2, #4]
	mov pc, lr
	THUMB_FUNC_START sub_08008D50
sub_08008D50:
	ldr r2, [pc, #344]
	ldr r2, [r2, #0]
	adds r2, #44
	ldr r3, [pc, #344]
	ldr r3, [r3, #0]
	ldr r5, [r0, #44]
	ldr r6, [pc, #340]
	subs r5, r5, r6
	str r5, [r0, #44]
	lsrs r5, r5, #16
	ldrh r4, [r3, #2]
	adds r5, r5, r4
	strh r5, [r2, #2]
	ldrh r4, [r3, #4]
	lsrs r4, r4, #2
	strh r4, [r2, #4]
	mov pc, lr
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
