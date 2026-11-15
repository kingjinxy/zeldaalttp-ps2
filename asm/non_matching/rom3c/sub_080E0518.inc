	THUMB_FUNC_START sub_080E0518
sub_080E0518: @ 0x080E0518
	push {r4-r6,lr}
	sub sp, sp, #4
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	bl GetRandomInt
	mov r1, #3
	and r1, r1, r0
	ldr r5, _080E056C  @ =gRam
	ldr r0, _080E0570  @ =gUnknown_08176698
	add r0, r1, r0
	ldrb r2, [r0]
	ldr r3, _080E0574  @ =0x00000ECB
	add r0, r5, r3
	mov r6, #0
	strb r2, [r0]
	ldr r2, _080E0578  @ =0x00000ECC
	add r0, r5, r2
	strb r6, [r0]
	ldr r0, _080E057C  @ =gUnknown_08176690
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r1, [r1]
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r3, _080E0580  @ =0x00000F52
	add r0, r5, r3
	add r0, r4, r0
	strb r6, [r0]
	ldr r0, _080E0584  @ =0x00000FC2
	add r5, r5, r0
	add r4, r4, r5
	mov r0, #255
	strb r0, [r4]
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E056C:
	.4byte gRam
_080E0570:
	.4byte gUnknown_08176698
_080E0574:
	.4byte 0x00000ECB
_080E0578:
	.4byte 0x00000ECC
_080E057C:
	.4byte gUnknown_08176690
_080E0580:
	.4byte 0x00000F52
_080E0584:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E0518

