	THUMB_FUNC_START sub_080B41C4
sub_080B41C4: @ 0x080B41C4
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r0, _080B4250  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r2, r0, r1
	mov r1, #14
	strh r1, [r2]
	add r4, r0, #0
	ldr r3, _080B4254  @ =0x0000096C
	add r3, r3, r4
	mov r8, r3
	mov r5, #128
	lsl r5, r5, #2
	add r3, r5, #0
	mov r7, #183
	lsl r7, r7, #1
	mov r12, r7
	ldr r0, _080B4258  @ =0x000007FF
	mov r9, r0
	ldr r6, _080B425C  @ =gUnknown_0200307E
_080B41F2:
	mov r1, #0
	ldrsh r0, [r2, r1]
	mov r5, r8
	mov r7, #0
	ldrsh r1, [r5, r7]
	add r0, r0, r1
	mov r1, r9
	and r0, r0, r1
	lsl r0, r0, #1
	add r1, r0, r6
	strh r3, [r1]
	ldr r5, _080B4260  @ =gUnknown_02003080
	add r1, r0, r5
	strh r3, [r1]
	ldr r7, _080B4264  @ =gUnknown_02003082
	add r0, r0, r7
	strh r3, [r0]
	ldrh r0, [r2]
	add r0, r0, #32
	strh r0, [r2]
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, r12
	bne _080B41F2
	ldr r1, _080B4254  @ =0x0000096C
	add r0, r4, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	mov r3, #135
	lsl r3, r3, #1
	add r2, r0, r3
	ldr r0, _080B4258  @ =0x000007FF
	and r2, r2, r0
	ldr r7, _080B4268  @ =0x0000098E
	add r0, r4, r7
	ldrb r0, [r0]
	sub r0, r0, #2
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #4
	bls _080B4246
	b _080B45E0
_080B4246:
	lsl r0, r0, #2
	ldr r1, _080B426C  @ =0x080B4270
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_080B4250:
	.4byte gRam
_080B4254:
	.4byte 0x0000096C
_080B4258:
	.4byte 0x000007FF
_080B425C:
	.4byte gUnknown_0200307E
_080B4260:
	.4byte gUnknown_02003080
_080B4264:
	.4byte gUnknown_02003082
_080B4268:
	.4byte 0x0000098E
_080B426C:
	.4byte 0x080B4270
	.4byte _080B4284
	.4byte _080B4314
	.4byte _080B43E0
	.4byte _080B447C
	.4byte _080B4524
_080B4284:
	ldr r0, _080B42B4  @ =0x00000A5C
	add r5, r4, r0
	ldrh r1, [r5]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080B42C8
	lsl r2, r2, #1
	ldr r3, _080B42B8  @ =gUnknown_0200307E
	add r1, r2, r3
	ldr r7, _080B42BC  @ =0x0000721C
	add r0, r7, #0
	strh r0, [r1]
	ldr r0, _080B42C0  @ =gUnknown_02003080
	add r4, r2, r0
	ldr r3, _080B42C4  @ =gUnknown_0816EFE6
	mov r1, #255
	ldrb r0, [r5]
	eor r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r4]
	b _080B42FA
_080B42B4:
	.4byte 0x00000A5C
_080B42B8:
	.4byte gUnknown_0200307E
_080B42BC:
	.4byte 0x0000721C
_080B42C0:
	.4byte gUnknown_02003080
_080B42C4:
	.4byte gUnknown_0816EFE6
_080B42C8:
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080B42E8
	lsl r2, r2, #1
	ldr r3, _080B42E0  @ =gUnknown_02003080
	add r1, r2, r3
	ldr r5, _080B42E4  @ =0x0000723F
	add r0, r5, #0
	strh r0, [r1]
	b _080B42FA
	.byte 0x00
	.byte 0x00
_080B42E0:
	.4byte gUnknown_02003080
_080B42E4:
	.4byte 0x0000723F
_080B42E8:
	lsl r2, r2, #1
	ldr r7, _080B4304  @ =gUnknown_02003080
	add r3, r2, r7
	ldr r1, _080B4308  @ =gUnknown_0816EFE6
	sub r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r3]
_080B42FA:
	ldr r0, _080B430C  @ =gUnknown_02003082
	add r1, r2, r0
	ldr r2, _080B4310  @ =0x0000721D
	add r0, r2, #0
	b _080B463A
_080B4304:
	.4byte gUnknown_02003080
_080B4308:
	.4byte gUnknown_0816EFE6
_080B430C:
	.4byte gUnknown_02003082
_080B4310:
	.4byte 0x0000721D
_080B4314:
	ldr r3, _080B434C  @ =0x00000A5C
	add r0, r4, r3
	ldrh r5, [r0]
	mov r0, #128
	and r0, r0, r5
	cmp r0, #0
	beq _080B4364
	lsl r2, r2, #1
	ldr r7, _080B4350  @ =gUnknown_0200307E
	add r4, r2, r7
	ldr r3, _080B4354  @ =gUnknown_0816EFE6
	mov r1, #255
	mov r0, #255
	and r0, r0, r5
	eor r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r4]
	ldr r1, _080B4358  @ =gUnknown_02003080
	add r0, r2, r1
	ldr r3, _080B435C  @ =0x0000723C
	add r1, r3, #0
	strh r1, [r0]
	ldr r5, _080B4360  @ =gUnknown_02003082
	add r2, r2, r5
	strh r1, [r2]
	b _080B463C
_080B434C:
	.4byte 0x00000A5C
_080B4350:
	.4byte gUnknown_0200307E
_080B4354:
	.4byte gUnknown_0816EFE6
_080B4358:
	.4byte gUnknown_02003080
_080B435C:
	.4byte 0x0000723C
_080B4360:
	.4byte gUnknown_02003082
_080B4364:
	mov r0, #15
	and r0, r0, r5
	cmp r0, #0
	bne _080B43A4
	lsl r1, r2, #1
	ldr r7, _080B438C  @ =gUnknown_0200307E
	add r2, r1, r7
	ldr r3, _080B4390  @ =0x0000721C
	add r0, r3, #0
	strh r0, [r2]
	ldr r5, _080B4394  @ =gUnknown_02003080
	add r2, r1, r5
	ldr r7, _080B4398  @ =0x0000723D
	add r0, r7, #0
	strh r0, [r2]
	ldr r0, _080B439C  @ =gUnknown_02003082
	add r1, r1, r0
	ldr r2, _080B43A0  @ =0x0000721D
	add r0, r2, #0
	b _080B463A
_080B438C:
	.4byte gUnknown_0200307E
_080B4390:
	.4byte 0x0000721C
_080B4394:
	.4byte gUnknown_02003080
_080B4398:
	.4byte 0x0000723D
_080B439C:
	.4byte gUnknown_02003082
_080B43A0:
	.4byte 0x0000721D
_080B43A4:
	lsl r2, r2, #1
	ldr r5, _080B43CC  @ =gUnknown_0200307E
	add r3, r2, r5
	ldr r1, _080B43D0  @ =gUnknown_0816EFE6
	sub r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r7, _080B43D4  @ =gUnknown_02003080
	add r1, r2, r7
	ldr r3, _080B43D8  @ =0x0000723E
	add r0, r3, #0
	strh r0, [r1]
	add r5, r5, #4
	add r2, r2, r5
	ldr r7, _080B43DC  @ =0x0000723F
	add r0, r7, #0
	strh r0, [r2]
	b _080B463C
_080B43CC:
	.4byte gUnknown_0200307E
_080B43D0:
	.4byte gUnknown_0816EFE6
_080B43D4:
	.4byte gUnknown_02003080
_080B43D8:
	.4byte 0x0000723E
_080B43DC:
	.4byte 0x0000723F
_080B43E0:
	ldr r0, _080B4408  @ =0x00000A5C
	add r4, r4, r0
	ldrh r1, [r4]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080B4420
	lsl r2, r2, #1
	ldr r3, _080B440C  @ =gUnknown_0200307E
	add r1, r2, r3
	ldr r5, _080B4410  @ =0x0000721C
	add r0, r5, #0
	strh r0, [r1]
	ldr r7, _080B4414  @ =gUnknown_02003080
	add r1, r2, r7
	ldr r3, _080B4418  @ =0x0000723E
	add r0, r3, #0
	strh r0, [r1]
	ldr r5, _080B441C  @ =gUnknown_02003082
	b _080B454A
_080B4408:
	.4byte 0x00000A5C
_080B440C:
	.4byte gUnknown_0200307E
_080B4410:
	.4byte 0x0000721C
_080B4414:
	.4byte gUnknown_02003080
_080B4418:
	.4byte 0x0000723E
_080B441C:
	.4byte gUnknown_02003082
_080B4420:
	mov r5, #15
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080B4450
	lsl r1, r2, #1
	ldr r7, _080B4440  @ =gUnknown_02003080
	add r2, r1, r7
	ldr r3, _080B4444  @ =0x0000723F
	add r0, r3, #0
	strh r0, [r2]
	ldr r5, _080B4448  @ =gUnknown_02003082
	add r1, r1, r5
	ldr r7, _080B444C  @ =0x0000723E
	b _080B4638
	.byte 0x00
	.byte 0x00
_080B4440:
	.4byte gUnknown_02003080
_080B4444:
	.4byte 0x0000723F
_080B4448:
	.4byte gUnknown_02003082
_080B444C:
	.4byte 0x0000723E
_080B4450:
	lsl r2, r2, #1
	ldr r0, _080B446C  @ =gUnknown_02003080
	add r1, r2, r0
	ldr r3, _080B4470  @ =0x0000723F
	add r0, r3, #0
	strh r0, [r1]
	ldr r7, _080B4474  @ =gUnknown_02003082
	add r2, r2, r7
	ldr r3, _080B4478  @ =gUnknown_0816EFE6
	ldrh r1, [r4]
	add r0, r5, #0
	and r0, r0, r1
	sub r0, r0, #1
	b _080B4554
_080B446C:
	.4byte gUnknown_02003080
_080B4470:
	.4byte 0x0000723F
_080B4474:
	.4byte gUnknown_02003082
_080B4478:
	.4byte gUnknown_0816EFE6
_080B447C:
	ldr r0, _080B44A4  @ =0x00000A5C
	add r4, r4, r0
	ldrh r1, [r4]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080B44BC
	lsl r2, r2, #1
	ldr r3, _080B44A8  @ =gUnknown_0200307E
	add r1, r2, r3
	ldr r5, _080B44AC  @ =0x0000721C
	add r0, r5, #0
	strh r0, [r1]
	ldr r7, _080B44B0  @ =gUnknown_02003080
	add r1, r2, r7
	ldr r3, _080B44B4  @ =0x0000723E
	add r0, r3, #0
	strh r0, [r1]
	ldr r5, _080B44B8  @ =gUnknown_02003082
	b _080B454A
_080B44A4:
	.4byte 0x00000A5C
_080B44A8:
	.4byte gUnknown_0200307E
_080B44AC:
	.4byte 0x0000721C
_080B44B0:
	.4byte gUnknown_02003080
_080B44B4:
	.4byte 0x0000723E
_080B44B8:
	.4byte gUnknown_02003082
_080B44BC:
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080B44E8
	lsl r1, r2, #1
	ldr r7, _080B44D8  @ =gUnknown_02003080
	add r2, r1, r7
	ldr r3, _080B44DC  @ =0x0000721D
	add r0, r3, #0
	strh r0, [r2]
	ldr r5, _080B44E0  @ =gUnknown_02003082
	add r1, r1, r5
	ldr r7, _080B44E4  @ =0x0000723E
	b _080B4638
_080B44D8:
	.4byte gUnknown_02003080
_080B44DC:
	.4byte 0x0000721D
_080B44E0:
	.4byte gUnknown_02003082
_080B44E4:
	.4byte 0x0000723E
_080B44E8:
	lsl r2, r2, #1
	ldr r1, _080B450C  @ =gUnknown_0200307E
	add r3, r2, r1
	ldr r1, _080B4510  @ =gUnknown_0816EFE6
	sub r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r3, _080B4514  @ =gUnknown_02003080
	add r1, r2, r3
	ldr r5, _080B4518  @ =0x0000723E
	add r0, r5, #0
	strh r0, [r1]
	ldr r7, _080B451C  @ =gUnknown_02003082
	add r2, r2, r7
	ldr r1, _080B4520  @ =0x0000723F
	b _080B45C2
_080B450C:
	.4byte gUnknown_0200307E
_080B4510:
	.4byte gUnknown_0816EFE6
_080B4514:
	.4byte gUnknown_02003080
_080B4518:
	.4byte 0x0000723E
_080B451C:
	.4byte gUnknown_02003082
_080B4520:
	.4byte 0x0000723F
_080B4524:
	ldr r3, _080B4560  @ =0x00000A5C
	add r4, r4, r3
	ldrh r1, [r4]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080B4578
	lsl r2, r2, #1
	ldr r5, _080B4564  @ =gUnknown_0200307E
	add r1, r2, r5
	ldr r7, _080B4568  @ =0x0000721C
	add r0, r7, #0
	strh r0, [r1]
	ldr r0, _080B456C  @ =gUnknown_02003080
	add r1, r2, r0
	ldr r3, _080B4570  @ =0x0000723E
	add r0, r3, #0
	strh r0, [r1]
	add r5, r5, #4
_080B454A:
	add r2, r2, r5
	ldr r3, _080B4574  @ =gUnknown_0816EFE6
	mov r1, #255
	ldrb r0, [r4]
	eor r0, r0, r1
_080B4554:
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r2]
	b _080B463C
	.byte 0x00
	.byte 0x00
_080B4560:
	.4byte 0x00000A5C
_080B4564:
	.4byte gUnknown_0200307E
_080B4568:
	.4byte 0x0000721C
_080B456C:
	.4byte gUnknown_02003080
_080B4570:
	.4byte 0x0000723E
_080B4574:
	.4byte gUnknown_0816EFE6
_080B4578:
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080B45A0
	lsl r1, r2, #1
	ldr r7, _080B4594  @ =gUnknown_02003080
	add r2, r1, r7
	ldr r3, _080B4598  @ =0x0000721C
	add r0, r3, #0
	strh r0, [r2]
	ldr r5, _080B459C  @ =gUnknown_02003082
	add r1, r1, r5
	b _080B4636
	.byte 0x00
	.byte 0x00
_080B4594:
	.4byte gUnknown_02003080
_080B4598:
	.4byte 0x0000721C
_080B459C:
	.4byte gUnknown_02003082
_080B45A0:
	lsl r2, r2, #1
	ldr r1, _080B45C8  @ =gUnknown_0200307E
	add r3, r2, r1
	ldr r1, _080B45CC  @ =gUnknown_0816EFE6
	sub r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r3, _080B45D0  @ =gUnknown_02003080
	add r1, r2, r3
	ldr r5, _080B45D4  @ =0x0000723F
	add r0, r5, #0
	strh r0, [r1]
	ldr r7, _080B45D8  @ =gUnknown_02003082
	add r2, r2, r7
	ldr r1, _080B45DC  @ =0x0000721C
_080B45C2:
	add r0, r1, #0
	strh r0, [r2]
	b _080B463C
_080B45C8:
	.4byte gUnknown_0200307E
_080B45CC:
	.4byte gUnknown_0816EFE6
_080B45D0:
	.4byte gUnknown_02003080
_080B45D4:
	.4byte 0x0000723F
_080B45D8:
	.4byte gUnknown_02003082
_080B45DC:
	.4byte 0x0000721C
_080B45E0:
	ldr r3, _080B4610  @ =0x00000A5C
	add r6, r4, r3
	ldrh r4, [r6]
	mov r0, #128
	and r0, r0, r4
	cmp r0, #0
	beq _080B4620
	lsl r2, r2, #1
	ldr r7, _080B4614  @ =gUnknown_0200307E
	add r1, r2, r7
	ldr r3, _080B4618  @ =0x0000721C
	add r0, r3, #0
	strh r0, [r1]
	add r4, r2, r5
	ldr r3, _080B461C  @ =gUnknown_0816EFE6
	mov r1, #255
	ldrb r0, [r6]
	eor r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r4]
	b _080B4632
	.byte 0x00
	.byte 0x00
_080B4610:
	.4byte 0x00000A5C
_080B4614:
	.4byte gUnknown_0200307E
_080B4618:
	.4byte 0x0000721C
_080B461C:
	.4byte gUnknown_0816EFE6
_080B4620:
	lsl r2, r2, #1
	add r3, r2, r5
	ldr r1, _080B4648  @ =gUnknown_0816EFE6
	mov r0, #15
	and r0, r0, r4
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r3]
_080B4632:
	ldr r5, _080B464C  @ =gUnknown_02003082
	add r1, r2, r5
_080B4636:
	ldr r7, _080B4650  @ =0x0000721D
_080B4638:
	add r0, r7, #0
_080B463A:
	strh r0, [r1]
_080B463C:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080B4648:
	.4byte gUnknown_0816EFE6
_080B464C:
	.4byte gUnknown_02003082
_080B4650:
	.4byte 0x0000721D
	THUMB_FUNC_END sub_080B41C4

