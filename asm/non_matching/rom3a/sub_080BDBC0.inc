	THUMB_FUNC_START sub_080BDBC0
sub_080BDBC0: @ 0x080BDBC0
	push {lr}
	sub sp, sp, #4
	ldr r1, _080BDBF4  @ =gUnknown_081706E4
	ldr r0, _080BDBF8  @ =gRam
	ldr r2, _080BDBFC  @ =0x000009E8
	add r0, r0, r2
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	bl sub_080BB15C
	mov r1, sp
	mov r0, #0
	strh r0, [r1]
	ldr r1, _080BDC00  @ =gUnknown_02000C00
	ldr r2, _080BDC04  @ =0x01000200
	mov r0, sp
	bl CpuSet
	add sp, sp, #4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BDBF4:
	.4byte gUnknown_081706E4
_080BDBF8:
	.4byte gRam
_080BDBFC:
	.4byte 0x000009E8
_080BDC00:
	.4byte gUnknown_02000C00
_080BDC04:
	.4byte 0x01000200
	THUMB_FUNC_END sub_080BDBC0

